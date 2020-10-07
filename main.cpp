#include <iostream>

#include "moderator.h"
#include "participant.h"

#include "random.h"

int main() {

    Moderator mod;
    Participant participant;

    mod.shuffleDoors();
    int firstDoor = mod.showFirstDoor();

    std::cout << "Door #" << firstDoor + 1 << " contains: " << mod.showDoor(firstDoor) << "\n";

    // select for the first time
    // it does not matter which of the two closed doors is selected here
    if (firstDoor == 0) {
        participant.changeFocus(Random::randInt(1, 2));
    } else {
        participant.changeFocus(0);
    }

    // switch or no switch?


    if(mod.showDoor(participant.getFocusedDoor()) == "goat") {
        std::cout << "Moderator won\n";
        participant.setFails(participant.getFailCounter() + 1);
    } else {
        std::cout << "Participant won\n";
        participant.setWins(participant.getWinCounter() + 1);
    }

    mod.clearDoors();
    
    system("pause");
    return 0;
}