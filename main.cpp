#include <iostream>

#include "moderator.h"
#include "participant.h"
#include "random.h"

#define SWITCH true

// number of games played
#define GAMES 100000

int main() {

    Moderator mod;
    Participant participant;
    
    for (int i = 0; i < GAMES; i++) {

        mod.shuffleDoors();

        // Participant chooses a random door
        participant.changeFocus(Random::randInt(0, 2));

        int firstDoor = mod.showFirstDoor(participant.getFocusedDoor());

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

    if (SWITCH) {
        std::cout << "The participant switched the door.\n";
    } else {
        std::cout << "The participant didn't switch the door.\n";
    }

    std::cout << "The participant won: " << participant.getWinCounter()
        << (participant.getWinCounter() == 1 ? " time.\n" : " times.\n");
    std::cout << "The participant failed: " << participant.getFailCounter()
        << (participant.getFailCounter() == 1 ? " time.\n" : " times.\n");

    system("pause");
    return 0;
}
