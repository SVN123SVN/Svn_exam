#include<iostream>
#include"Toys.h"
#include<string>
using namespace std;
class Toys
{
public:
	string getName();
	int getPrice();
	int getAge();
	int getCount();
	
	Toys(string name,int price,int age,int count);
	~Toys();

private:
	string name;
	int price, age, count;
};

Toys::Toys(string name,int price,int age,int count)
{
	this->name=name;
	this->age=age;
	this->count=count;
	this->price=price;
}

Toys::~Toys()
{
}

string Toys::getName(){
	return this->name;
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