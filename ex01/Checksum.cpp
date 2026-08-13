#include "Checksum.hpp"


class Checksum::Checksum{

    unsigned of(const std::string& packed)const{

        unsigned int sum; //no negative value

        for(char c : packed)
        {
            sum += static_cast<unsigned>(c);
        }

        return sum;
    }

};