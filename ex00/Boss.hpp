#pragma once
#include "Entity.hpp"

class Boss : public Entity {

    std::string describe() const override {

        return "Boss (hp 300)";
    };


};