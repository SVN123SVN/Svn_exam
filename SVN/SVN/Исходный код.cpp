#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Toys.h"
#include "Access.h"


using namespace std;


int main() {
	setlocale(0, "");
	Toys toy[10];
	access(toy);
	return 0;
}