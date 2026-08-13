#include "Entity.hpp"

class Orc : public Entity {

    std::string describe() const override {

        return "Orc (hp 40)";
    };


};