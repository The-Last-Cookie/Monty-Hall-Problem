#include "moderator.h"
#include "random.h"

Moderator::Moderator() {

}

Moderator::~Moderator() {

}

// rearrange the doors randomly
void Moderator::shuffleDoors() {

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

int Moderator::showFirstDoor(int focusedDoor) {

    switch (focusedDoor) {
        case 0:
            if (doors.at(0).getContent() == "money") {
                return Random::randInt(1, 2);
            }

            if (doors.at(1).getContent() == "money") {
                return 2;
            }

            return 1;

        case 1:
            if (doors.at(1).getContent() == "money") {
                return Random::choice(0, 2);
            }

            if (doors.at(0).getContent() == "money") {
                return 2;
            }

            return 0;

        case 2:
            if (doors.at(2).getContent() == "money") {
                return Random::choice(0, 1);
            }

            if (doors.at(0).getContent() == "money") {
                return 1;
            }

            return 0;
    }
}

std::string Moderator::showDoor(int number) {
	return doors.at(number).getContent();
}