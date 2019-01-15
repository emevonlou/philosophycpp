#include <iostream>
using namespace std;

int main()
{
    char eme[] = {0x1b, '[', '1', ';', '3', '5', 'm', 0};
    cout << eme;
    int x;

    cout << "Qual o dia em que nietzsche nasceu?";
    cin >> x;

    switch (x)
    {
    case 15:
        cout << "YES! No dia 15 de outubro de 1844 nasceu a Aurora niilista dual! um espetaculo." << endl;
        break;
    case 10:
        cout << "Cinco dias a mais e voce estaria correto. Nietzsche nasceu dia 15 de outubro de 1844." << endl;
        break;
    case 20:
        cout << "Cinco dias a menos e voce estaria correto. Nieyzsche nasceu dia 15 de outubro de 1944." << endl;
        break;
    case 30:
        cout << "Quinze dias a menos e voce estaria correto. Nietzsche nasceu dia 15 de outubro de 1944." << endl;
        break;
    default:
        cout << "Sorry, tente novamente." << endl;
        break;
    }

    return 0;
}