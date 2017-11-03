#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int x;
    
    cout << "Você acredita que é capaz de amar o destino que escolheu?" << endl;
    cout << "Digite 1 para sim e 0 para não." << endl;
    cin >> x;

    if(x == 1)
    {
       cout << "Friedrich Nietzsche concorda com você." << endl;
       cout << "Para uma reafirmação disso, leia 'Além do bem e do mal'." << endl; 
    }
    else
    {
        cout << "Seria bom começar a viver os pre-socráticos." << endl;
    }

    return 0;
}