#pragma once
#include <iostream>
#include <string>
using namespace std;

class Item
{
protected:
	string name;
	string author;
	int year;
	double price;
public:
	Item();
	Item(string name, string author, int year, double price);

	void setName(string name);
	void setAuthor(string author);
	void setYear(int year);
	void setPrice(double price);

	string getName()const;
	string getAuthor()const;
	int getYear()const;
	double getPrice()const;

	void print()const;
};

