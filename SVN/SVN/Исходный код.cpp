#include <iostream>
#include <string>

using namespace std;

struct Toys{//структура игрушек
	string name;
	int age;
	int price;
	int count;
};

void access(Toys object[10]){
	object[0].name = "Кукла";
	object[0].age = 3;
	object[0].count = 50;
	object[0].price = 35;

	object[1].name = "Мяч";
	object[1].age = 4;
	object[1].count = 25;
	object[1].price = 50;

	object[2].name = "Конструктор";
	object[2].age = 5;
	object[2].count = 20;
	object[2].price = 100;

	object[3].name = "Монополия";
	object[3].age = 7;
	object[3].count = 10;
	object[3].price = 150;

	object[4].name = "Машина";
	object[4].age = 4;
	object[4].count = 25;
	object[4].price = 40;
}

void input_a_b(int *a, int *b, int *x){
	cout << "Введите возрастные ограничения и цену!" << endl;
	cout << "от: ";
	cin >> *a;
	cout << "до: ";
	cin >> *b;
	cout << "Цена до: ";
	cin >> *x;
}

void finnd(Toys object[10]){
	int a, b, x;
	input_a_b(&a, &b, &x);
	for (int i = 0; i < 5; i++){
		if (a <= object[i].age && b >= object[i].age && x >= object[i].price){
			cout << object[i].name << " " << object[i].age << " " << object[i].price << endl;
		}
	}
}

int main(){
	setlocale(0, "");
	Toys toy[10]; //массив структур
	access(toy);
	finnd(toy);
	system("pause");
	return 0;
}