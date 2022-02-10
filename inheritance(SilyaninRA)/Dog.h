#pragma once
#include "HomeAnimal.h"
class Dog : public HomeAnimal
{
protected:
	std::string kind = "Собака";
public:
	Dog(std::string name, std::string size, int year, int weight) : HomeAnimal(name, size, year, weight){}
	std::string getKIND() {
		return kind;
	}
};

