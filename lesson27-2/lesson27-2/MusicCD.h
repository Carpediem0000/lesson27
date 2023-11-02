#pragma once
#include "Item.h"
class MusicCD: public Item
{
protected:
	int duration;
public:
	MusicCD();
	MusicCD(string name, string author, int year, double price, int duration);

	void setDur(int dur);
	int getDur()const;

	void print()const;
};

