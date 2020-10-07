#pragma once

#include <chrono>
#include <random>

class Random {
	public:
		Random();
		~Random();
		static int randInt(int min, int max);
};