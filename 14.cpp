#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    char eme[] = {0x1b, '[', '1', ';', '3', '7', 'm', 0};
    cout << eme;
    const char s = 's';
    const char n = 'n';
    char w;

    cout << "Voce acredita que o humano nasce da alteridade(s/n)?" << endl;
    cin >> w;

    if (w == s)
    {
        cout << "SIM!Para o grande filósofo Emanuel Levinas, a ALTERIDADE,\n";
        cout << "o comeco do filosofar, o fundamento da razao, o sentido\n";
        cout << "do humano eh a possibilidade de realização da justica e paz!!\n";
    }
    else if (w == n)
    {
        cout << "Voce precisa estudar o grande filosofo judeu lituano\n";
        cout << "Emanuel Levinas!" << endl;
    }
    else
    {
        cout << "Opcao invalida.Tente outra vez\n";
    }

    return 0;
}