#include "Item.h"

Item::Item()
{
    this->name = "NoName";
    this->author = "Unknown";
    this->year = 1900;
    this->price = 0;
}

Item::Item(string name, string author, int year, double price)
{
    this->name = name;
    this->author = author;
    this->year = year;
    this->price = price;
}

void Item::setName(string name)
{
    this->name = name;
}

void Item::setAuthor(string author)
{
    this->author = author;
}

void Item::setYear(int year)
{
    this->year = year;
}

void Item::setPrice(double price)
{
    this->price = price;
}

string Item::setName() const
{
    return name;
}

string Item::setAuthor() const
{
    return author;
}

int Item::setYear() const
{
    return year;
}

double Item::setPrice() const
{
    return price;
}

void Item::print() const
{
    cout << "+----------------------------------------\\\n";
    cout << "| Name: " << name << endl;
    cout << "| Author: " << author << endl;
    cout << "| Year: " << year << endl;
    cout << "| Price: " << price << endl;
    cout << "+----------------------------------------/\n";
}
