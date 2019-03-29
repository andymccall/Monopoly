#include "pch.h"
#include "Constants.h"
#include "Square.h"

Square::Square() {

	this->setColour(K_UNDEFINED);

}


Square::~Square() {

}

void Square::setColour(int colour) {

	this->colour = colour;

}

int Square::getColour() {
	return this->colour;
}

void Square::setPlayer(int playerNumber, Player player) {
	this->players[playerNumber] = player;
};

Player Square::getPlayer(int playerNumber) {
	return this->players[playerNumber];
};


string Square::getDetails() {

	string details;

	switch (this->getColour()) {
		case K_WHITE:
			details.append("White");
			break;
		case K_BROWN:
			details.append("Brown");
			break;
		case K_GREY:
			details.append("Grey");
			break;
		case K_RED:
			details.append("Red");
			break;
		case K_ORANGE:
			details.append("Orange");
			break;
		case K_GREEN:
			details.append("Green");
			break;
		case K_BLUE:
			details.append("Blue");
			break;
		case K_YELLOW:
			details.append("Yellow");
			break;
		case K_PURPLE:
			details.append("Purple");
			break;
		default:
			details.append("Unknown Colour!");
			break;
	}

	return details;

}
