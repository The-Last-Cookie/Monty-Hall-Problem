#include "participant.h"

Participant::Participant() {
	this->focusedDoor = 0;
	this->wins = 0;
	this->fails = 0;
}

Participant::~Participant() {

}

void Participant::switchDoor(int firstDoor) {
	
	if (firstDoor == 0) {
		if (this->focusedDoor == 1) {
			this->focusedDoor = 2;
			return;
		}

		this->focusedDoor = 1;
	}
	else if (firstDoor == 2) {
		if (this->focusedDoor == 0) {
			this->focusedDoor = 1;
			return;
		}

		this->focusedDoor = 0;
	}
	else {
		if (this->focusedDoor == 0) {
			this->focusedDoor = 2;
			return;
		}

		this->focusedDoor = 0;
	}
}

int Participant::getFocusedDoor() {
	return this->focusedDoor;
}

void Participant::changeFocus(int number) {
	this->focusedDoor = number;
}

int Participant::getWinCounter() {
	return this->wins;
}

void Participant::setWins(int number) {
	this->wins = number;
}

int Participant::getFailCounter() {
	return this->fails;
}

void Participant::setFails(int number) {
	this->fails = number;
}