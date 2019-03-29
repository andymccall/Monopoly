#include "Constants.h"
#include "pch.h"
#include "Player.h"

Player::Player() {
	this->setBalance(K_STARTING_BALANCE);
}

Player::~Player() {

}

void Player::setToken(Token token) {

	this->token = token;

}

Token Player::getToken() {
    return this->token;
}

void Player::setBalance(int amount) {

	this->balance = amount;

}

int Player::getBalance() {
	return this->balance;
}

void Player::addBalance(int amount) {
	this->balance = this->balance+amount;
}

void Player::subtractBalance(int amount) {
	this->balance = this->balance - amount;
}