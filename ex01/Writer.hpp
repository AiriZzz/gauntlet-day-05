#pragma once
#include <fstream>

class Writer {

    public:
     void write(const std::string& path, const std::string& packed, const unsigned& sum);
};