//
// Created by Vaasu Bisht on 28/10/24.
//

#include "BaseCube.h"
#include <string>
#include <unordered_map>

/*
 * Get the string representation of a move
 */
std::string BaseCube::getMove(const Move move){
    const std::unordered_map<Move,std::string> mp = {
        {Move::U, "U"}, {Move::U_PRIME, "U'"},
        {Move::D, "D"}, {Move::D_PRIME, "D'"},
        {Move::F, "F"}, {Move::F_PRIME, "F'"},
        {Move::B, "B"}, {Move::B_PRIME, "B'"},
        {Move::L, "L"}, {Move::L_PRIME, "L'"},
        {Move::R, "R"}, {Move::R_PRIME, "R'"}
    };
    return mp.at(move);
}
