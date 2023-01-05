#include <string>

// Copyright (c) 2022 Bhumit Attarde
// SPDX-License-Identifier: BSL-1.0

#include <gtest/gtest.h>

#include "../../include/parser.hpp"

const std::string url="https://kite.zerodha.com/connect/login?v=3&api_key=oeugHdhdyY&symbol&i=NSE:INFY&i=NSE:M&M";
const std::string expectedEncodedUrl = "https%3A%2F%2Fkite%2Ezerodha%2Ecom%2Fconnect%2Flogin%3Fv%3D3%26api%5Fkey%3DoeugHdhdyY%26symbol%26i%3DNSE%3AINFY%26i%3DNSE%3AM%26M";
const std::string expectedDecodedUrl = url;

TEST(parserTest, encodeTest) {
    const std::string encodedUrl = parser::encodeUrl(url);
    EXPECT_EQ(encodedUrl, expectedEncodedUrl);
};

TEST(parserTest, decodeTest) {
    const std::string decodedUrl = parser::decodeUrl(url);
    EXPECT_EQ(decodedUrl, expectedDecodedUrl);
};
