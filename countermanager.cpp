#include "countermanager.h"

CounterManager::CounterManager() {
	this->wins = 0;
	this->fails = 0;
}

CounterManager::~CounterManager() {

}

int CounterManager::getWinCounter() {
	return this->wins;
}

void CounterManager::setWins(int number) {
	this->wins = number;
}

int CounterManager::getFailCounter() {
	return this->fails;
}

void CounterManager::setFails(int number) {
	this->fails = number;
}