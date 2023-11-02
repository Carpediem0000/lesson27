#pragma once
#include <string>
#include <iostream>
using namespace std;

class Lesson
{
protected:
	string title;
	string description;
private:
	string dz;
public:
	Lesson();
	Lesson(string title, string description, string dz);
	~Lesson();

	const string getTitle()const;
	const string getDescription()const;
	const string getDz()const;

	void setTitle(string title);
	void setDescription(string description);
	void setDz(string dz);

	void print()const;
};

