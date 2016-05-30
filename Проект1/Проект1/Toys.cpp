#include<iostream>
#include"Toys.h"
#include<string>
using namespace std;

Toys::Toys()
{
}

Toys::~Toys()
{
}

__declspec(dllexport) char Toys::getName(){
	return this->name;
}
__declspec(dllexport) int Toys::getAge(){
	return this->age;
}
__declspec(dllexport) int Toys::getCount(){
	return this->count;
}
__declspec(dllexport) int Toys::getPrice(){
	return this->price;
}

__declspec(dllexport) void Toys::setName(char name){
	this->name = name;
}
__declspec(dllexport) void Toys::setAge(int age){
	this->age = age;
}
__declspec(dllexport) void Toys::setPrice(int price){
	this->price = price;
}
__declspec(dllexport) void Toys::setCount(int count){
	this->count = count;
}