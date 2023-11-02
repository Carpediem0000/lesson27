#include "MusicCD.h"

MusicCD::MusicCD()
{
    this->duration = 0;
}

MusicCD::MusicCD(string name, string author, int year, double price, int duration)
    :Item(name, author, year, price)
{
    this->duration = duration;
}

void MusicCD::setDur(int dur)
{
    this->duration = dur;
}

int MusicCD::getDur() const
{
    return duration;
}

void MusicCD::print() const
{
    cout << "+----------------------------------------\\\n";
    cout << "|\tMusicCD\n";
    cout << "+----------------------------------------\n";
    cout << "| Name: " << name << endl;
    cout << "| Author: " << author << endl;
    cout << "| Year: " << year << endl;
    cout << "| Price: " << price << endl;
    cout << "| Duration: " << duration << endl;
    cout << "+----------------------------------------/\n";
}
