#include "Checksum.hpp"

unsigned Checksum::of(const std::string& packed){

    unsigned sum = 0; //no negative value

    for(char c : packed)
    {
        sum += static_cast<unsigned>(c);
    }

    std::cout << "Checksum  -> "<< sum << "\n";

    return sum;
}