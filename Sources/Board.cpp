#include <iostream>

#include "Board.h"
#include "Special.h"
#include "Property.h"
#include "Constants.h"

Board::Board() {

    reset();

}

Board::~Board() {

}

void Board::add(Square *square, int position) {
    this->monopolyBoard[position] = square;
}

Square *Board::get(int position) {
    return monopolyBoard[position];
}

void Board::reset() {

    // Create Special Squares
    Special *go = new Special();
    go->setName("Go");
    go->setColour(K_WHITE);
    add(go,0);

    Square *red1 = new Square();
    red1->setColour(K_RED);
    add(red1,1);

    Square *red2 = new Square();
    red2->setColour(K_RED);
    add(red2,2);

    Special *bonus = new Special();
    bonus->setName("Bonus");
    bonus->setColour(K_WHITE);
    add(bonus,3);

    Square *grey1 = new Square();
    grey1->setColour(K_GREY);
    add(grey1,4);

    Square *grey2 = new Square();
    grey2->setColour(K_GREY);
    add(grey2,5);

    Special *jail = new Special();
    jail->setName("Jail");
    jail->setColour(K_WHITE);
    add(jail,6);

    Square *brown1 = new Square();
    brown1->setColour(K_BROWN);
    add(brown1,7);

    Square *brown2 = new Square();
    brown2->setColour(K_BROWN);
    add(brown2,8);

    Property *airport1 = new Property();
    airport1->setName("Airport");
    airport1->setColour(K_WHITE);
    add(airport1,9);

    Square *orange1 = new Square();
    orange1->setColour(K_ORANGE);
    add(orange1,10);

    Square *orange2 = new Square();
    orange2->setColour(K_ORANGE);
    add(orange2,11);

    Square *orange3 = new Square();
    orange3->setColour(K_ORANGE);
    add(orange3,12);

    Special *freeParking = new Special();
    freeParking->setName("Free Parking");
    freeParking->setColour(K_WHITE);
    add(freeParking,13);

    Square *yellow1 = new Square();
    yellow1->setColour(K_YELLOW);
    add(yellow1,14);

    Square *yellow2 = new Square();
    yellow2->setColour(K_YELLOW);
    add(yellow2,15);

    Special *penalty = new Special();
    penalty->setName("Penalty");
    penalty->setColour(K_WHITE);
    add(penalty,16);

    Square *green1 = new Square();
    green1->setColour(K_GREEN);
    add(green1,17);

    Square *green2 = new Square();
    green2->setColour(K_GREEN);
    add(green2,18);

    Special *goToJail = new Special();
    goToJail->setName("Go To Jail");
    goToJail->setColour(K_WHITE);
    add(goToJail,19);

    Square *blue1 = new Square();
    blue1->setColour(K_BLUE);
    add(blue1,20);

    Square *blue2 = new Square();
    blue2->setColour(K_BLUE);
    add(blue2,21);

    Square *blue3 = new Square();
    blue3->setColour(K_BLUE);
    add(blue3,22);

    Property *airport2 = new Property();
    airport2->setName("Airport");
    airport2->setColour(K_WHITE);
    add(airport2,23);

    Square *purple1 = new Square();
    purple1->setColour(K_PURPLE);
    add(purple1,24);

    Square *purple2 = new Square();
    purple2->setColour(K_PURPLE);
    add(purple2,25);

}

void Board::print() {

    for (auto &square : monopolyBoard) {
        std::cout << square->getDetails();
        std::cout << square->getPlayer(1).getToken().getDetails();
    }
}
