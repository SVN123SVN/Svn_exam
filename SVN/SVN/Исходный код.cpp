#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Toys.h"
#include "Access.h"
#include "find.h"

using namespace std;

int main(){
	setlocale(0, "");
	Toys toy[10];
	access(toy);
	find(toy);
	system("pause");
	return 0;
}