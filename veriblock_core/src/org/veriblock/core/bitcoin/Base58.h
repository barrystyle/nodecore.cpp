#pragma once

#include <string>
#include <vector>
#include <stdexcept>
#include "stringhelper.h"

// VeriBlock NodeCore
// Copyright 2017-2018 VeriBlock, Inc.
// All rights reserved.
// https://www.veriblock.org
// Distributed under the MIT software license, see the accompanying
// file LICENSE or http://www.opensource.org/licenses/mit-license.php.

namespace vbk {

    /**
     * TODO: Attribute this code to its source, and make sure the licensing (Apache 2.0) is permissible. See BitcoinUtilities.java
     * Otherwise, re-write Base58 to avoid licensing issues (easy).
     * <p>
     * Adapted from Base58 class of BitcoinJ. Their license:
     * <p>
     * Copyright 2011 Google Inc.
     * <p>
     * Licensed under the Apache License, Version 2.0 (the "License");
     * you may not use this file except in compliance with the License.
     * You may obtain a copy of the License at
     * <p>
     * http://www.apache.org/licenses/LICENSE-2.0
     * <p>
     * Unless required by applicable law or agreed to in writing, software
     * distributed under the License is distributed on an "AS IS" BASIS,
     * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
     * See the License for the specific language governing permissions and
     * limitations under the License.
     */
    class Base58 {

        private:
            static const string BASE58_ALPHABET;
            static const vector<char>  ALPHABET;
            static const int BASE_58;
            static constexpr int BASE_256 = 256;
            static const int8_t INDEXES[128];

        public:
            static bool isBase58String(const std::string &toTest);
            static std::string encode(std::vector<char> &input);
            static std::vector<char> decode(const string &input);

        private:
            static char divmod58(std::vector<char> &number, int startAt);
            static char divmod256(std::vector<char> &number58, int startAt);
            static std::vector<char> copyOfRange(const std::vector<char> &source, int from, int to);
    };
}
