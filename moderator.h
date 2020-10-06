#pragma once

#include <iostream>
#include <vector>

#include "door.h"

class Moderator {
	public:
		Moderator();
		~Moderator();
		void shuffleDoors();
		int showFirstDoor();
		std::string showDoor(int number);

	private:
		std::vector<Door> doors;
};
