#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese-brazilian");
    char eme[] = {0x1b, '[', '1', ';', '3', '5', 'm', 0};
    cout << eme;

    cout << "Quatro regras simples para a vida no esconderijo: " << endl
         << endl;
    cout << "Um: Nunca confie em um policial vestido de abrigo." << endl
         << endl;
    cout << "Dois: Cuidado com o entusiasmo e com o amor." << endl;
    cout << "Ambos são temporários da maneira mais ligeira." << endl
         << endl;
    cout << "Três: Quando perguntado se você se importa com o mundo..." << endl;
    cout << "Olhe fundo dentro daquele que o perguntou." << endl;
    cout << "Ele não perguntará novamente." << endl
         << endl;
    cout << "Quatro: Nunca dê seu nome verdadeiro." << endl
         << endl;
    cout << "Cinco? Se algum dia lhe pedirem que olhe pra sí mesmo,nunca o faça." << endl;

    return 0;
}