#include "door.h"

Door::Door() {

}

Door::~Door() {

}

void Door::setContent(std::string content) {
	this->content = content;
}

std::string Door::getContent() {
	return this->content;
}

