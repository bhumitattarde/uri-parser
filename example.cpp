#include <iostream>
#include <string>

#include "include/parser.hpp"

int main() {
    const std::string uri = "https://www.google.com/";
    std::cout << "uri: " << uri << '\n';

    std::cout << "encoded uri: " << parser::encodeUrl(uri) << '\n';
    std::cout << "decoded uri: " << parser::decodeUrl(uri) << '\n';

    return 0;
}