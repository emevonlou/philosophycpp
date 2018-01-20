#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Summum bonum ( 'sumo bem' ou 'bem maior, em latim) eh uma expressao latina usada na filosofia - particularmente, em Aristoteles ";
    cout << ",na filosofia medieval e na filosofia de Immanuel Kant - para descrever o bem maior que o ser humano deve buscar." << endl
         << endl;
    cout << "Voce se considera sujeito ao 'Summum Bonum'(digite 1 pra sim e 0 pra nao)?" << endl;
    cin >> x;

    if (x == true)
    {
        cout << "Parabens.Summum Bonum eh o maximo do bem que eh um fim em si.";
    }
    else
    {
        cout << "Nada mal. A natureza desse estado preocupou muitos autores, dentre eles cristaos.";
    }

    return 0;
}
