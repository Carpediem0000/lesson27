#include "MusicCD.h"
#include "MovieDVD.h"

int main()
{
	Item a;
	Item b("Chto-to", "Ya", 2010, 5000);
	a.print();
	b.print();
	cout << "===================================\n";

	MusicCD a1;
	MusicCD b1("Pop", "lil pump", 2019, 5, 3);
	a1.print();
	b1.print();
	cout << "===================================\n";

	MovieDVD a2;
	MovieDVD b2("Avatar", "author", 2023, 200, 240, genre::Action, "USA", "Unknown");
	a2.print();
	b2.print();
}