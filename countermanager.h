#pragma once

#include <iostream>

class CounterManager {
	public:
		CounterManager();
		~CounterManager();
		
		int getWinCounter();
		void setWins(int number);
		int getFailCounter();
		void setFails(int number);

	private:
		int wins;
		int fails;
};