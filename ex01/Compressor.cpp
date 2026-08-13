#include "Compressor.hpp"

class Compressor {

    std::string compress(const std::string& text)const{

        std::size_t levelStart = text.find("level") + 5;
        std::size_t levelEnd = text.find("=");
        std::size_t hpStart = text.find("hp=") + 3;

        std::string level =
        text.substr(levelStart, levelEnd - levelStart);

        std::string hp =
        text.substr(hpStart);
        
        std::cout << "compress -> " << level << ";" << hp ;
        return level + ";" + hp;

    }
};