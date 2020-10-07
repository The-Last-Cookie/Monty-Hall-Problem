#include "door.h"

Door::Door() {
	this->open = false;
}

Door::~Door() {

}

void Door::setContent(std::string content) {
	this->content = content;
}

// get content when door is closed
std::string Door::getContent() {
	return this->content;
}

std::string Door::openDoor() {
	this->open = true;
	return this->content;
}

bool Door::getStatus() {
	return this->open;
}