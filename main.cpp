#include <iostream>

#include "moderator.h"
#include "participant.h"

#include "random.h"

#define SWITCH false

// number of games played
#define GAMES 10000

int main() {

    Moderator mod;
    Participant participant;

    mod.shuffleDoors();
    
    for (int i = 0; i < GAMES; i++) {

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

    std::cout << "Wins: " << participant.getWinCounter() << "\n";
    std::cout << "Fails: " << participant.getFailCounter() << "\n";

    system("pause");
    return 0;
}
