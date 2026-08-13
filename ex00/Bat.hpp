#pragma once
#include "Entity.hpp"

class Bat : public Entity {

    std::string describe() const override {

        return "Bat (hp 8)";
    };


};