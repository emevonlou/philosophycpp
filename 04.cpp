#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    bool x;

    cout << "Responda as alternativas com 1 para sim e 0 para não: " << endl;
    cout << "Nietzsche era antisemita?";
    cin >> x;

    if (x == true)
    {
        cout << "Nooopz! Nietzsche falava que o homem em sí era incompleto. ";
        cout << "Que carecia de superacao. Isso nada tinha haver com os Judeus ";
        cout << "especificamente." << endl;
    }
    else
    {
        cout << "Isso! Na verdade, essa idéia foi criada pela irmã de Nietzsche ";
        cout << "que era absolutamente preconceituosa e desejava ";
        cout << "a todo custo, associar a imagem dele ao antisemitismo." << endl;
    }
    cout << "--------------------------------------------------------" << endl
         << endl;
    cout << "Nietzsche acreditava em Deus?" << endl;
    cin >> x;

    if (x == 1)
    {
        cout << "YESS!Nietzsche não acreditava no Deus criado pelo homem. ";
        cout << "O Deus que era constantemente usado para promover  ";
        cout << "guerras, dor e martírios involuntários.";
    }
    else
    {
        cout << "Resposta errada. Nietzsche sabia da distância que o homem ";
        cout << "Estava de Deus. E com isso declarou: 'O ultimo verdadeiro ";
        cout << "Cristao morreu na cruz', dentre outras declarações.";
    }

    cout << "--------------------------------------------------------------" << endl;
    cout << "Nietzsche era Niilista? " << endl;
    cin >> x;

    if (x == 1)
    {
        cout << "Nietzsche se considerava Niilista quando partia do pressuposto ";
        cout << "que quando assumimos o nada, não estamos sozinhos.";
        cout << "Nos acompanha tambem o amor pela vontade e pela vida, acima de tudo." << endl;
    }
    else
    {
        cout << "Errado. Leia os primeiros capitulos de 'ECCE HOMO'" << endl;
    }
    return 0;
}