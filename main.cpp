#include <iostream>
#include <Constants.h>

#include "Game.h"
#include "Board.h"
#include "Special.h"
#include "Property.h"

int main() {


    // Player One
    Token playerOneToken;
    playerOneToken.setType(K_DOG);
    Player playerOne;
    playerOne.setToken(playerOneToken);

    // Player Two
    Token playerTwoToken;
    playerTwoToken.setType(K_CAR);
    Player playerTwo;
    playerTwo.setToken(playerTwoToken);

    // Create the board
    Board board;

    // Create the game
    Game game;
    game.addPlayer(1,playerOne);
    game.addPlayer(2,playerTwo);
    game.addBoard(board);

    // Play the game
    game.play();

    return 0;
}