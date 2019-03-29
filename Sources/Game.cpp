#include <iostream>
#include <Constants.h>

#include "Game.h"

Game::Game() {
    std::cout << "Welcome to Monopoly!" << std::endl << std::endl;
    setNumberOfRounds(K_NUMBER_OF_ROUNDS);
}

int Game::getNumberOfRounds() {
    return this->numberOfRounds;
}

void Game::setNumberOfRounds(int numberOfRounds) {
    this->numberOfRounds = numberOfRounds;
}

int Game::getRound() {
    return this->round;
}

void Game::setRound(int round) {
    this->round = round;
}

void Game::addBoard(Board board) {
    this->board = board;
}

Board Game::getBoard() {
    return this->board;
};

void Game::nextRound() {
    this->setRound(this->getRound()+1);
}

void Game::addPlayer(int playerNumber, Player player) {
    this->player[playerNumber] = player;
};

Player Game::getPlayer(int playerNumber) {
    return player[playerNumber];
}

int Game::getCurrentPlayer() {
    return this->currentPlayer;
}
void Game::play() {
    board.get(0)->getDetails();

    this->board.print();

    int round=0;
    while( round < K_NUMBER_OF_ROUNDS ) {
        cout << "Player " << board;
        round++;
    }
}