#pragma once
#include <string>
#include <memory>
#include <vector>
#include <iostream>

class Entity {
public:
    virtual std::string describe() const= 0;
    virtual ~Entity() = default;
};