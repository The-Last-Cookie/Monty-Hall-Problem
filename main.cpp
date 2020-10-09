#include <iostream>

#include "moderator.h"
#include "participant.h"

#include "random.h"

#define SWITCH false

// number of games played
#define GAMES 100000

int main() {

    Moderator mod;
    Participant participant;
    
    for (int i = 0; i < GAMES; i++) {

        mod.shuffleDoors();
        int firstDoor = mod.showFirstDoor();

        // select for the first time
        // it does not matter which of the two closed doors is selected here
        if (firstDoor == 0) {
            participant.changeFocus(Random::randInt(1, 2));
        }
        else if (firstDoor == 2) {
            participant.changeFocus(Random::randInt(0, 1));
        }
        else {
            participant.changeFocus(Random::choice(0, 2));
        }

        // switch or no switch?
        bool switchDoor = SWITCH;
        if (switchDoor) {
            participant.switchDoor(firstDoor);
        }

        if (mod.showDoor(participant.getFocusedDoor()) == "goat") {
            participant.setFails(participant.getFailCounter() + 1);
        }
        else {
            participant.setWins(participant.getWinCounter() + 1);
        }

        mod.clearDoors();

    }

    std::cout << "The participant won: " << participant.getWinCounter()
        << (participant.getWinCounter() == 1 ? " time.\n" : " times.\n");
    std::cout << "The participant failed: " << participant.getFailCounter()
        << (participant.getFailCounter() == 1 ? " time.\n" : " times.\n");

    system("pause");
    return 0;
}
