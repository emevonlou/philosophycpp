#include <iostream>
#include <cstdlib>
#include <time.h>
// #include <conio.h>

using namespace std;

int main()
{
	char eme[] = {0x1b, '[', '1', ';', '3', '5', 'm', 0};
	cout << eme;
	srand(time(NULL));
	int x, y[20];
	x = rand() % 10;

	cout << x << endl
		 << endl;
	system("pause");

	for (int i = 0; i < 20; i++)
	{
		y[i] = rand() % 10;
		cout << y[i] << " ";
	}

	cout << endl;
	system("pause");
	system("cls");

	for (int i = 0; i != 27;)
	{
		for (int j = 0; j < 10; j++)
		{
			y[i] = rand() % 10;
			cout << "Filosofia Niet" << y[i] << " ";
		}
	}

	return 0;
}