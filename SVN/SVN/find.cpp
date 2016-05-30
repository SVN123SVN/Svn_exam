#include "find.h"
#include "input_a_b.h"
#include "Toys.h"
#include <iostream>

using namespace std;

void find(Toys object[10]){
	int a,b,x;
	input_a_b(a,b,x);
	for(int i=0;i<5;i++)
	{
		if(object[i].age<=b && object[i].age>=a && object[i].price<=x)
		{
			cout<<object[i].name<<" "<<object[i].age<<" "<<object[i].count<<" "<<object[i].price<<endl;
		}
	}

}