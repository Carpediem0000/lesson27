#include "PaidLesson.h"
#define test 1

PaidLesson::PaidLesson()
{
    this->price = 0;
#if test == 1
    cout << "PaidLesson():" << this->title << endl;
#endif // test == 1
}

PaidLesson::PaidLesson(string title, string description, string dz, double price)
    :Lesson(title, description, dz)
{
    /*this->title = title;
    this->description = description;
    this->setDz(dz);*/
    this->price = price;
#if test == 1
    cout << "PaidLesson(t, d, dz, price):" << this->title << endl;
#endif // test == 1
}

PaidLesson::~PaidLesson()
{
#if test == 1
    cout << "~PaidLesson():" << this->title << endl;
#endif // test == 1
}

const double PaidLesson::getPrice() const
{
    return price;
}

void PaidLesson::setPrice(double price)
{
    this->price = price;
}

void PaidLesson::print() const
{
    // Lesson::print(); // А можно и так
    cout << "+-------------------------------------------\\\n";
    cout << "| Title: " << title << endl;
    cout << "| Description: " << description << endl;
    cout << "| Home Work: " << this->getDz() << endl;
    cout << "| Price: " << price << endl;
    cout << "+-------------------------------------------/\n";
}
