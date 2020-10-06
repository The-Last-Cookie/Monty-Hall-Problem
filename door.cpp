#include "door.h"

Door::Door() {
	this->open = false;
}

Door::~Door() {

}

void Door::setContent(std::string content) {

}

std::string Door::openDoor() {
	this->open = true;
}

bool Door::getStatus() {
	return this->open;
}