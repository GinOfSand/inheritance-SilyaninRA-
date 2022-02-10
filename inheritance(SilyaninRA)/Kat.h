#pragma once
#include "HomeAnimal.h"
class Kat : public HomeAnimal
{
protected:
	std::string kind = "Кошка";
public:
	Kat(std::string name, std::string size, int year, int weight) : HomeAnimal(name, size, year, weight) {}
	std::string getKIND() {
		return kind;
	}
};

