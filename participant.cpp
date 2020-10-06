#include "participant.h"

Participant::Participant() {
	this->focusedDoor = 0;
}

Participant::~Participant() {

}

void Participant::switchDoor() {

}

int Participant::getFocusedDoor() {
	return this->focusedDoor;
}

void Participant::changeFocus(int number) {
	this->focusedDoor = number;
}