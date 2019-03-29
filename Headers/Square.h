#pragma once

#include <iostream>

#include "Player.h"

using namespace std;

class Square {

public:
	Square();
	~Square();
	void setColour(int colour);
	int getColour();
	void setPlayer(int playerNumber, Player player);
	Player getPlayer(int playerNumber);
	virtual string getDetails();

private:
	int colour;
	Player players[2];

};

