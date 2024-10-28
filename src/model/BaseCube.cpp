//
// Created by Vaasu Bisht on 28/10/24.
//

#include "BaseCube.h"
#include <string>
#include <unordered_map>


std::string BaseCube::getMove(const Move move){
    static const std::unordered_map<Move,std::string> mp = {
        {Move::U, "U"}, {Move::U_PRIME, "U'"},
        {Move::D, "D"}, {Move::D_PRIME, "D'"},
        {Move::F, "F"}, {Move::F_PRIME, "F'"},
        {Move::B, "B"}, {Move::B_PRIME, "B'"},
        {Move::L, "L"}, {Move::L_PRIME, "L'"},
        {Move::R, "R"}, {Move::R_PRIME, "R'"}
    };
    return mp.at(move);
}

BaseCube& BaseCube::executeMove(const Move move) {
    static const std::unordered_map<Move, BaseCube& (BaseCube::*)()> mp = {
        {Move::L, &BaseCube::l}, {Move::L_PRIME, &BaseCube::lPrime},
        {Move::R, &BaseCube::r}, {Move::R_PRIME, &BaseCube::rPrime},
        {Move::U, &BaseCube::u}, {Move::U_PRIME, &BaseCube::uPrime},
        {Move::D, &BaseCube::d}, {Move::D_PRIME, &BaseCube::dPrime},
        {Move::F, &BaseCube::f}, {Move::F_PRIME, &BaseCube::fPrime},
        {Move::B, &BaseCube::b}, {Move::B_PRIME, &BaseCube::bPrime}
    };
    const auto it = mp.find(move);
    return (this->*it->second)();
}

BaseCube& BaseCube::executeInversionOfMove(const Move move) {
    static const std::unordered_map<Move, BaseCube& (BaseCube::*)()> mp = {
        {Move::L_PRIME, &BaseCube::l}, {Move::L, &BaseCube::lPrime},
        {Move::R_PRIME, &BaseCube::r}, {Move::R, &BaseCube::rPrime},
        {Move::U_PRIME, &BaseCube::u}, {Move::U, &BaseCube::uPrime},
        {Move::D_PRIME, &BaseCube::d}, {Move::D, &BaseCube::dPrime},
        {Move::F_PRIME, &BaseCube::f}, {Move::F, &BaseCube::fPrime},
        {Move::B_PRIME, &BaseCube::b}, {Move::B, &BaseCube::bPrime}
    };
    const auto it = mp.find(move);
    return (this->*it->second)();
}
