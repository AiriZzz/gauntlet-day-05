#include "Writer.hpp"

void Writer::write(const std::string& path, const std::string& packed, const unsigned& sum){


    std::ofstream saveFile(path);

    saveFile << packed ;
    saveFile << sum ;


};