#include "pch.h"
#include "Special.h"
#include "Constants.h"


Special::Special() {

    this->setColour(K_WHITE);

}


Special::~Special() {

}

void Special::setName(string name) {
    this->name = name;
}

string Special::getDetails() {
    string details;

    details.append(Square::getDetails());
    details.append(" (");
    details.append(this->name);
    details.append(")");

    return details;
}