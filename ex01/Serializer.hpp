#pragma once
#include "GameState.hpp"
#include <string>
#include <iostream>

class Serializer {

    public:
        std::string serialize(const GameState& state)const;
};