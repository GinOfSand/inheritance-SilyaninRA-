#pragma once
#include <iostream>
class HomeAnimal
{
protected:
	std::string name;
	std::string size;
	int year;
	int weight;
public:
	HomeAnimal(std::string name, std::string size, int year, int weight) :
		name{ name }, size{ size }, year{ year }, weight{ weight }{}
	HomeAnimal():HomeAnimal("Default name", "Default size", 0, 0){}
	void DisplayIFO(std::string kind) {
		std::cout << "Имя:" << name << " Разновидность:" << kind << " Возраст:" << year << " Вес:" << weight
			<< " Размер:" << size << "\n";
	}
};

