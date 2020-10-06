#pragma once

#include <iostream>

class Participant {
	public:
		Participant();
		~Participant();
		void switchDoor();
		int getFocusedDoor();
		void changeFocus(int number);

	private:
		int focusedDoor;
};