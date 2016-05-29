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
	Toys(string name, int price, int age, int count);
	~Toys();

private:

};

Toys::Toys(string name, int price, int age, int count)
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

#endif