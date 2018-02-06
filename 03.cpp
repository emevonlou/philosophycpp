#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  setlocale(LC_ALL, "");

  const char n = 'n';
  const char s = 's';
  const char k = 'k';
  const char h = 'h';
  char x;
  char pinkish[] = { 0x1b, '[', '3', '8',';','5',';','2','1','2','m',0 };
  cout << pinkish;

  cout << "Para cada alternativa digite: " << endl;
  cout << "(n) para o rebelde Nietzsche." << endl;
  cout << "(s) para o realista shopenhauer." << endl;
  cout << "(k) para o moralista Kant." << endl;
  cout << "(h) para o institucionalista Hegel." << endl;
  cin >> x;

  switch (x)
  {
  case (n):
    cout << "O Homem é uma ponte atada entre o animal e o super homem!";
    cout << "Uma ponte sob o abismo!!!" << endl;
    break;

  case (s):
    cout << "A solidão é a sorte de todos os espíritos excepcionais!!" << endl;
    break;

  case (k):
    cout << "Belo, é tudo quanto agrada desinteressadamente!!" << endl;
    break;

  case (h):
    cout << "Nada de grande se realizou no mundo sem paixão!!" << endl;
    break;

  default:
    cout << "Sua opção com certeza foi uma grande figura.";
    cout << "Mas não está cadastrada no sistema. Arriverdeci!" << endl;
    break;
  }
  return 0;
}