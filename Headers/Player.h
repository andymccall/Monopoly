#pragma once

#include "Token.h"

class Player {

public:
	Player();
	void setToken(Token token);
	Token getToken();
	void setBalance(int amount);
	int getBalance();
	void addBalance(int amount);
	void subtractBalance(int amount);
	~Player();

private:
	Token token;
	int balance;

};

