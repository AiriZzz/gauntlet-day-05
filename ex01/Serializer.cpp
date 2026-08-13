#include "Serializer.hpp"

class Serializer::Serializer{

    std::string Serializer::serialize(const GameState& state)const{

        std::cout << "serialize -> Level="<< std::to_string(state.level) << ";hp=" << std::to_string(state.hp) <<"\n" ;    
        return "Level=" + std::to_string(state.level) + ";hp=" + std::to_string(state.hp) ;
    }

};