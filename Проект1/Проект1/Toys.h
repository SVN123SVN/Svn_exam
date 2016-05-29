#ifndef TOYS
#define TOYS
class Toys
{
public:
	__declspec(dllexport) char Toys::getName();
	__declspec(dllexport) int Toys::getAge();
	__declspec(dllexport) int Toys::getCount();
	__declspec(dllexport) int Toys::getPrice();
	__declspec(dllexport) void setName(char *name);
	__declspec(dllexport) void setAge(int age);
	__declspec(dllexport) void setPrice(int price);
	__declspec(dllexport) void setCount(int count);
	Toys();
	~Toys();
private:
	char name;
	int age, count, price;
};
#endif