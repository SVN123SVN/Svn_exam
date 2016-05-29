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
	void setName(string name);
	void setAge(int age);
	void setPrice(int price);
	void setCount(int count);
	
	Toys();
	~Toys();

private:
	string name;
	int price, age, count;
};

Toys::Toys()
{
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

void Toys::setName(string name){
	this->name = name;
}
void Toys::setAge(int age){
	this->age = age;
}
void Toys::setPrice(int price){
	this->price = price;
}
void Toys::setCount(int count){
	this->count = count;
}