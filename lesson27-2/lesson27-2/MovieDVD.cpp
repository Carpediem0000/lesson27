#include "MovieDVD.h"

MovieDVD::MovieDVD()
{
    this->movieGenre = genre::Other;
    this->country = "Ukraine";
    this->actors = "Zelya";
}

MovieDVD::MovieDVD(string name, string author, int year, double price, int duration, genre movieGenre, string country, string actors)
    :MusicCD(name, author, year, price, duration)
{
    this->movieGenre = movieGenre;
    this->country = country;
    this->actors = actors;
}

void MovieDVD::setMovieGenre(genre movieGenre)
{
    this->movieGenre = movieGenre;
}

void MovieDVD::setCountry(string country)
{
    this->country = country;
}

void MovieDVD::setActors(string actors)
{
    this->actors = actors;
}

genre MovieDVD::getMovieGenre() const
{
    return movieGenre;
}

string MovieDVD::getCountry() const
{
    return country;
}

string MovieDVD::getActors() const
{
    return actors;
}

double MovieDVD::getPrice() const
{
    switch (movieGenre)
    {
    case Other: return price;
        break;
    case Dramma: return price * 0.18;
        break;
    case Comedy: return price * 0.9;
        break;
    case Action: return price;
        break;
    case Serial: return price * 0.18;
        break;
    }
    return price;
}

void MovieDVD::print() const
{
    cout << "+----------------------------------------\\\n";
    cout << "|\tMovieDVD\n";
    cout << "+----------------------------------------\n";
    cout << "| Name: " << name << endl;
    cout << "| Author: " << author << endl;
    cout << "| Year: " << year << endl;
    switch (movieGenre)
    {
    case Other: cout << "| Genre: Other\n";
        break;
    case Dramma: cout << "| Genre: Dramma\n";
        break;
    case Comedy: cout << "| Genre: Comedy\n";
        break;
    case Action: cout << "| Genre: Action\n";
        break;
    case Serial: cout << "| Genre: Serial\n";
        break;
    }
    cout << "| Country: " << country << endl;
    cout << "| Actors: " << actors << endl;
    cout << "| Price: " << getPrice() << endl;
    cout << "| Duration: " << duration << endl;
    cout << "+----------------------------------------/\n";
}
