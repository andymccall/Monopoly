#include "pch.h"
#include "Constants.h"
#include "Token.h"

Token::Token() {

	this->setType(K_UNDEFINED);

}

Token::Token(int type) {

	this->setType(type);

}

Token::~Token() {

}

void Token::setType(int type) {
	this->type = type;
}

int Token::getType() {
	return this->type;
}

string Token::getDetails() {

	string details;

	switch (this->type) {
		case K_DOG:
			details.append("Dog");
			break;
		case K_CAR:
			details.append("Car");
		default:
			details.append("Unknown token!");
			break;
	}

}


