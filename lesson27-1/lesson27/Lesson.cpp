#include "Lesson.h"
#define test 1

Lesson::Lesson()
{
    this->title = "Undefine";
    this->description = "Empty...";
    this->dz = "Emtpy...";
#if test == 1
    cout << "Lesson():" << this->title << endl;
#endif // test == 1
}

Lesson::Lesson(string title, string description, string dz)
{
    this->title = title;
    this->description = description;
    this->dz = dz;
#if test == 1
    cout << "Lesson(title, desc,dz):" << this->title << endl;
#endif // test == 1
}

Lesson::~Lesson()
{
#if test == 1
    cout << "~Lesson():" << this->title << endl;
#endif // test == 1
}

const string Lesson::getTitle() const
{
    return title;
}

const string Lesson::getDescription() const
{
    return description;
}

const string Lesson::getDz() const
{
    return dz;
}

void Lesson::setTitle(string title)
{
    this->title = title;
}

void Lesson::setDescription(string description)
{
    this->description = description;
}

void Lesson::setDz(string dz)
{
    this->dz = dz;
}

void Lesson::print() const
{
    cout << "+-------------------------------------------\\\n";
    cout << "| Title: " << title << endl;
    cout << "| Description: " << description << endl;
    cout << "| Home Work: " << dz << endl;
    cout << "+-------------------------------------------/\n";
}
