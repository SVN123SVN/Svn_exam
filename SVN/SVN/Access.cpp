#include "Toys.h"
#include "Access.h"
#include <iostream>
using namespace std;

void access(Toys object[10]){
	object[0].name = *"Кукла";
	object[0].age=3;
	object[0].count=50;
	object[0].price=35;

	object[1].name = *"Мяч";
	object[1].age = 4;
	object[1].count = 25;
	object[1].price = 50;

	object[2].name = *"Конструктор";
	object[2].age = 5;
	object[2].count = 20;
	object[2].price = 100;

	object[3].name = *"Монополия";
	object[3].age = 7;
	object[3].count = 10;
	object[3].price = 150;

	object[4].name = *"Машина";
	object[4].age = 4;
	object[4].count = 25;
	object[4].price = 40;
}

