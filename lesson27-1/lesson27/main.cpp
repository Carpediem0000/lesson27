#include "PaidLesson.h"

int main()
{
	Lesson a;
	a.print();

	Lesson b("C#", "IF ELSE", "create a code");
	b.print();
	cout << "=========================================\n";

	PaidLesson a1;
	a1.print();

	PaidLesson b1("JS", "Dom Model", "Create a gallery", 250.99);
	b1.print();
}