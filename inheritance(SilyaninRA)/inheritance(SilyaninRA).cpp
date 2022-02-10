#include <iostream>
#include "HomeAnimal.h"
#include "Dog.h"
#include "Kat.h"
#include "Parrot.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	Dog a("Шарик", "Средний", 4, 10);
	Kat b("Мурка", "Маленкий", 2, 5);
	Parrot c("Капитан", "Очень маленький", 21, 1);
	a.DisplayIFO(a.getKIND());
	b.DisplayIFO(b.getKIND());
	c.DisplayIFO(c.getKIND());
}
