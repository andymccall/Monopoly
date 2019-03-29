#pragma once

#include <string>

#include "Board.h"
#include "Square.h"

class Board {
public:
    Board();
    ~Board();
    void reset();
    void add(Square *square, int position);
    Square *get(int position);

    void print();

private:

    Square *monopolyBoard[26];

};