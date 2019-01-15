#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int x = 1;
  bool y;

  char blue[] = {0x1b, '[', '1', ';', '3', '4', 'm', 0};
  cout << blue;

  do
  {
    cout << "O homem é uma ponte, atada entre o animal e o super homem..." << endl;
    x++;
    break;
  } while (x <= 20);

  cout << endl;
  cout << "--------------------------------------------------------------------------" << endl;
  cout << "Foi Nietzsche quem disse isso? digite (1)sim ou (0)não: " << endl;
  cin >> y;

  if (y == 1)
    {
      for (int i = 1; i <= 10; i++)
      {
        cout << "YESS...Uma ponte sob o abismo!" << endl;
      }
    }
    else
    {
      cout << "Tente outra vez." << endl;
    }

  return 0;
}