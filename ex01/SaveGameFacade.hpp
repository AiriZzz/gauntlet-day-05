#pragma once
#include "GameState.hpp"
#include "Serializer.hpp"
#include "Compressor.hpp"
#include "Writer.hpp"
#include <iostream>
#include <string>
#include <fstream>


class SaveGameFacade {

    public:

        void save(const GameState& state, const std::string& path){}

    private:

    Serializer m_serializer;
    Compressor m_compressor;
    Writer m_writer;

};