#include "input_a_b.h"
#include "Toys.h"
#include <iostream>
using namespace std;

void input_a_b(int &a, int &b, int &x){
	cout << "¬ведите возрастные ограничени€ и цену!" << endl;
	cout << "от: ";
	cin >> a;
	cout << "до: ";
	cin >> b;
	cout << "÷ена до: ";
	cin >> x;
}