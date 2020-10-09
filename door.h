#pragma once

#include <iostream>

class Door {
	public:
		Door();
		~Door();
		std::string getContent();
		void setContent(std::string content);

	private:
		std::string content;
};
