#pragma once

#include <iostream>

class Door {
	public:
		Door();
		~Door();
		void setContent(std::string content);
		std::string openDoor();
		bool getStatus();

	private:
		std::string content;
		bool open;
};
