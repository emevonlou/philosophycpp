#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, " ");

    const char a = 'a';
    const char w = 'w';
    const char z = 'z';
    const char b = 'b';
    char x;

    cout << "sobre os livros de Nietzsche para cada alternativa digite: " << endl;
    cout << "(a) Se o trecho se referir ao Livro Aurora." << endl;
    cout << "(w) se o trecho se referir ao livro um problema para músicos." << endl;
    cout << "(z) Se o trecho se referir ao livro Assim Falou Zaratustra." << endl;
    cout << "(b) Se o trecho se referir ao livro Wagner em Bayreuth." << endl;

    cout << "Como nos fazem bem as tardes bronzeas da sua felicidade ";
    cout << "Olhamos pra fora ao ouvi-la: Ja vimos o mar tao liso? ";
    cout << "E como a danca moura nos fala de modo tranquilizador! ";
    cout << "como, em sua lasciva melancolia, mesmo a nossa insaciabilidade ";
    cout << "aprende a satisfacao!" << endl;
    cout << "Digite o caracter correspondente ao livro que cita esse trecho: " << endl;
    cin >> x;
    
    if(x == w)
    {
        cout << "Excelente!Caminhemos para o proximo destino!" << endl;
    }
    else
    {
        cout << "Noopz.Esse trecho é do livro 'Um problema para musicos'(pág.13)" << endl;
    }

    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Temos que aprender a pensar de outra forma- para enfim, ";
    cout << "talvez bem mais tarde, sentir de outra forma!" << endl;
    cout << "Digite o caracter correspondente ao livro que cita esse trecho: " << endl;
    cin >> x;

    if(x == a)
    {
        cout << "Bravo!!Hoje nasceu uma aurora!";
    }
    else
    {
        cout << "Noopz. Esse trecho foi retirado do livro 'Aurora'(p.75)!";
    }
    
    system("pause");
return 0;
}