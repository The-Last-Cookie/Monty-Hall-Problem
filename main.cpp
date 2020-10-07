#include <iostream>

#include "countermanager.h"
#include "moderator.h"
#include "participant.h"

#include "random.h"

int main() {

    CounterManager counterMan;
    Moderator mod;
    Participant participant;

    mod.shuffleDoors();
    int firstDoor = mod.showFirstDoor();

    std::cout << "Door #" << firstDoor + 1 << " contains: " << mod.showDoor(firstDoor) << "\n";

    // select for the first time
    // it does not matter which of the two closed doors is selected here
    if (firstDoor == 0) {
        participant.changeFocus(1); // can be either 1 or 2
    } else {
        participant.changeFocus(0);
    }

    // template
    // if(door.content = "goat") {
    //    std::cout << "Moderator won\n";
    //} else {
    //    std::cout << "Spectator won\n";
    //}
    
    system("pause");
    return 0;
}