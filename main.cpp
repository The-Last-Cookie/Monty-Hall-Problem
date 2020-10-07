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

    // template
    // if(door.content = "goat") {
    //    std::cout << "Moderator won\n";
    //} else {
    //    std::cout << "Spectator won\n";
    //}
    
    system("pause");
    return 0;
}