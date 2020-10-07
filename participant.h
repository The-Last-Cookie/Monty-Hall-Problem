#pragma once

#include <iostream>

class Participant {
	public:
		Participant();
		~Participant();
		void switchDoor();
		int getFocusedDoor();
		void changeFocus(int number);

		int getWinCounter();
		void setWins(int number);
		int getFailCounter();
		void setFails(int number);

	private:
		int focusedDoor;
		int wins;
		int fails;
};