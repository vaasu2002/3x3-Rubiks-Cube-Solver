//
// Created by Vaasu Bisht on 28/10/24.
//

#ifndef BASECUBE_H
#define BASECUBE_H

#include <string>
#include <vector>

class BaseCube{
    public:
        // Correction of error: Polymorphic class 'BaseCube' has a non-virtual public destructor
        // Solution: added virtual public destructor
        virtual ~BaseCube() = default;

        // constexpr makes compile-time constant
        static constexpr int CUBE_DIM = 3;
        static constexpr int CUBE_SIZE = CUBE_DIM * CUBE_DIM;

        enum class Face{
            UP, DOWN, FRONT, BACK, LEFT, RIGHT
        };

        enum class Color{
            GREEN, BLUE, YELLOW, RED, WHITE, ORANGE
        };

        enum class Move{
            // prime->  anti-clockwise rotation
            U, U_PRIME,
            D, D_PRIME,
            F, F_PRIME,
            B, B_PRIME,
            L, L_PRIME,
            R, R_PRIME,
          };

        /**
         * Retrieves the color of the specified cell at (row, col) on the given face.
         * The face is oriented towards the viewer.
         * Note: Rows are numbered from top to bottom, and columns from left to right and are 0-indexed
         * @params face, row, column
         * @return Colour
         */
        virtual Color getColour(Face face, unsigned row, unsigned col) const = 0;

        /**
         * Checks if the Rubik's Cube is cracked.
         * @return true if solved, false otherwise.
         */
        virtual bool isCracked() const = 0;

        /**
         * @return string representation of a move.
         */
        static std::string getMove(Move move);

        BaseCube &executeMove(Move move);

        BaseCube &executeInversionOfMove(Move move);

        std::vector<Move> shuffle(unsigned int times);

        // Virtual functions for all rotational moves
        virtual BaseCube& f() = 0;
        virtual BaseCube& fPrime() = 0;
        virtual BaseCube& u() = 0;
        virtual BaseCube& uPrime() = 0;
        virtual BaseCube& l() = 0;
        virtual BaseCube& lPrime() = 0;
        virtual BaseCube& r() = 0;
        virtual BaseCube& d() = 0;
        virtual BaseCube& dPrime() = 0;
        virtual BaseCube& rPrime() = 0;
        virtual BaseCube& b() = 0;
        virtual BaseCube& bPrime() = 0;
};

#endif BASECUBE_H
