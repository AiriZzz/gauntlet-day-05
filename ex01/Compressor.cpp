#include "Compressor.hpp"

std::string Compressor::compress(const std::string& text){

    std::string serialized = text;
    auto start = serialized.begin();
    auto last = serialized.begin()+6;

    serialized.erase(start, last);

    start = serialized.begin()+1;
    last = serialized.begin()+4;

    serialized.erase(start, last);

    std::cout << "compress  -> " << serialized << "(" << text.length() << " -> " << serialized.length() << " bytes) \n";
    return serialized;

}