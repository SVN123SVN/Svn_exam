#include<iostream>
#include"Toys.h"
#include<string>
using namespace std;
class Toys
{
public:
	char getName();
	int getPrice();
	int getAge();
	int getCount();
	
	Toys(char *name,int price,int age,int count);
	~Toys();

private:
	char *name;
	int price, age, count;
};

Toys::Toys(char *name,int price,int age,int count)
{
	this->name=name;
	this->age=age;
	this->count=count;
	this->price=price;
}

Toys::~Toys()
{
}

char Toys::getName(){
	return this->name[10];
}
int Toys::getAge(){
	return this->age;
}
int Toys::getCount(){
	return this->count;
}
int Toys::getPrice(){
	return this->price;
}