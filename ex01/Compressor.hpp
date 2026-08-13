#pragma once
#include "GameState.hpp"
#include <string>

class Compressor{

    public:
        std::string compress(const GameState& compressed)const;

};