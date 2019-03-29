#pragma once

#include "Square.h"

class Special : public Square {

public:
	Special();
	~Special();
	void setName(string name);
	string getDetails();

private:
	string name;

};

