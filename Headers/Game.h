#pragma once

#include "Player.h"
#include "Board.h"

class Game {

public:
    Game();

    int getNumberOfRounds();
    void setNumberOfRounds(int numberOfRounds);
    int getRound();
    void setRound(int round);
    void addPlayer(int playerNumber, Player player);
    Player getPlayer(int playerNumber);
    void addBoard(Board board);
    Board getBoard();
    void nextRound();
    void setCurrentPlayer(int currentPlayer);
    int getCurrentPlayer();
    void play();

private:
    int numberOfRounds;
    int round;
    int currentPlayer;
    Player player[2];
    Board board;


};