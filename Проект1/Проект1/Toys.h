#ifndef TOYS
#define TOYS
class Toys
{
public:
	string Toys::getName(){
	}
	int Toys::getAge(){
	}
	int Toys::getCount(){
	}
	int Toys::getPrice(){		
	}
	void setName(string name);
	void setAge(int age);
	void setPrice(int price);
	void setCount(int count);
	Toys();
	~Toys();

private:

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

#endif