#pragma once

#include <iostream>

class Door {
	public:
		Door();
		~Door();
		void setContent(std::string content);
		std::string getContent();
		std::string openDoor();

	private:
		std::string content;
		bool open;
};
