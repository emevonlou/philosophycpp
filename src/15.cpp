// 9:
#include <iostream> // cin, cout
#include <cstdlib>  // System,random(rand).
#include <time.h>   // Time.
//#include <conio.h>  // Funções do windows.

using namespace std;

int main()
{
    char eme[] = {0x1b, '[', '1', ';', '3', '5', 'm', 0};
	cout << eme;
	srand(time(NULL));
	int a, b[20];
	a = rand() % 10;

	cout << a << endl
		 << endl;
	system("pause");

	for (int i = 0; i < 20; i++)
	{
		b[i] = rand() % 10;
		cout << b[i] << " ";
	}
	cout << endl;
	system("pause");
	system("cls");

	for (int i = 0; a != 27;)
	{
		for (int j = 0; j < 10; j++)
		{
			b[i] = rand() % 10;
			cout << b[i] << " ";
		}
		// a = getch(); // Verifica valor randomico pausadamente.
		if (a == 97)
		{
			b[i] = rand() % 100 + 1;
			i++;
			if (i == 9)
			{
				i = 0;
			}
		}
		else if (a == 100)
		{
			b[i] = rand() % 100 + 1;
			i--;
			if (i == -1)
			{
				i = 9;
			}
			system("cls");
		}
	}
}
