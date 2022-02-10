#pragma once
#include "HomeAnimal.h"
class Parrot : public HomeAnimal
{
protected:
	std::string kind = "Попугай";
public:
	Parrot(std::string name, std::string size, int year, int weight) : HomeAnimal(name, size, year, weight) {}
	std::string getKIND() {
		return kind;
	}
};

