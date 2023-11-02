#pragma once
#include "Lesson.h"

class PaidLesson: public Lesson
{
protected:

	double price;

public:
	PaidLesson();
	PaidLesson(string title, string description, string dz, double price);
	~PaidLesson();

	const double getPrice()const;
	void setPrice(double price);

	void print()const;
};

