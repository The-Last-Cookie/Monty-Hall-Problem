#include "participant.h"

Participant::Participant() {
	this->focusedDoor = 0;
	this->wins = 0;
	this->fails = 0;
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