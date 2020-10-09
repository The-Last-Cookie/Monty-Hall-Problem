#include "moderator.h"
#include "random.h"

Moderator::Moderator() {

}

Moderator::~Moderator() {

}

// rearrange the win randomly
void Moderator::shuffleDoors() {
    // get int between 1 and 3
    int rand = Random::randInt(1, 3);

    Door d1;
    d1.setContent("money");

    Door d2;
    d2.setContent("goat");

    Door d3;
    d3.setContent("goat");

    switch (rand) {
        case 1:
            doors.push_back(d1);
            doors.push_back(d2);
            doors.push_back(d3);
            break;

        case 2:
            doors.push_back(d2);
            doors.push_back(d1);
            doors.push_back(d3);
            break;

        case 3:
            doors.push_back(d3);
            doors.push_back(d2);
            doors.push_back(d1);
            break;
    }
}

void Moderator::clearDoors() {
    this->doors.clear();
}

int Moderator::showFirstDoor() {

    if (doors.at(0).getContent() == "money") {
        return Random::randInt(1, 2);
    } else if (doors.at(2).getContent() == "money") {
        return Random::randInt(0, 1);
    } else {
        return Random::choice(0, 2);
    }
}

std::string Moderator::showDoor(int number) {
	return doors.at(number).openDoor();
}