#pragma once
#include "MusicCD.h"

enum genre{Other=-1, Dramma=1, Comedy, Action, Serial};
class MovieDVD: public MusicCD
{
protected:
	genre movieGenre;
	string country;
	string actors;
public:
	MovieDVD();
	MovieDVD(string name, string author, int year, double price,
		int duration,genre movieGenre, string country, string actors);

	void setMovieGenre(genre movieGenre);
	void setCountry(string country);
	void setActors(string actors);

	genre getMovieGenre()const;
	string getCountry()const;
	string getActors()const;
	double getPrice()const;

	void print()const;
};

