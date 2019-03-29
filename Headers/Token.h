#pragma once

#include <string>
#include <iostream>

using namespace std;

class Token {

public:
	Token();
	Token(int type);
	~Token();
	void setType(int type);
	int getType();
	string getDetails();

private:
	int type;

};

