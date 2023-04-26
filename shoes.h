#pragma once
#include <string>
using namespace std;
class Shoe
{
private:
	string type;
	string brand;
	string colour;
	int price;

public:
	Shoe();
	Shoe(string t, string b, string c, int p);
	string getType();
	void setType(string t);
	string getBrand();
	void setBrand(string b);
	string setColour();
	void setColour(string c);
	int getPrice();
	void setPrice(int p);

};

Shoe::Shoe()
{
	type = " ";
	brand = " ";
	colour = " ";
	price = 0;
}

Shoe::Shoe(string t, string b, string c, int p)
{
	type = t;
	brand = b;
	colour = c;
	price = p;
}

string Shoe::getType()
{
	return type;
}
void Shoe::setType()
{
	type = t;
}
string Shoe::getBrand()
{
	return brand;
}
