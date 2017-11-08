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
    cout << "---------------------------------------------------------------------" << endl;
    cout << "(a) Se o trecho se referir ao Livro Aurora." << endl;
    cout << "(w) se o trecho se referir ao livro um problema para musicos." << endl;
    cout << "(z) Se o trecho se referir ao livro Assim Falou Zaratustra." << endl;
    cout << "(b) Se o trecho se referir ao livro Wagner em Bayreuth." << endl;
    cout << "----------------------------------------------------------------------" << endl;

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
        cout << "Noopz.Esse trecho eh do livro 'Um problema para musicos'(pág.13)" << endl;
    }

    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Temos que aprender a pensar de outra forma- para enfim, ";
    cout << "talvez bem mais tarde, sentir de outra forma!" << endl;
    cout << "Digite o caracter correspondente ao livro que cita esse trecho: " << endl;
    cin >> x;

    if(x == a)
    {
        cout << "Bravo!!Hoje nasceu uma aurora!" << endl;
    }
    else
    {
        cout << "Noopz. Esse trecho foi retirado do livro 'Aurora'(p.75)!" << endl;
    }

    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "Nenhum pastor e um so rebanho! Todos querem o mesmo, ";
    cout << "todos sao iguais: O que pensa de outro modo tende a ir ";
    cout << "para o manicomio.";
    cout << "Digite o caracter correspondente ao livro que cita esse trecho: " << endl;
    cin >> x;

    if(x == z)
    {
        cout << "YESS!Parabens! Es um dos que participa efetivamente do ";
        cout << "preambulo de zaratustra!" << endl;
    }
    else
    {
        cout << "Noopz! Esse trecho foi retirado do livro 'Assim falou zaratustra'";
        cout << "Da primeira parte do preambulo(p.29)" << endl;
    }

    cout << "------------------------------------------------------------------------------" << endl;
    cout << "A Liberdade nao eh algo que recebemos como se fosse uma dadiva ";
    cout << "o homem livre se faz por si mesmo ao se confrontar com perguntas ";
    cout << "sobre o sentido de sua existencia e, perceber que ninguem, a nao ser ";
    cout << "ele proprio, pode responde-las!" << endl;
    cout << "Digite o caracter correspondente ao livro que cita esse trecho: " << endl;
    cin >> x;

    if(x == b)
    {
        cout << "Em Bayreuth e em qualquer lugar voce estara certo!" << endl;
    }
    else
    {
        cout << "Esse trecho foi retirado do livro Wagner em Bayreuth(p.25)." << endl;
    }

    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Ai, aproxima-se o tempo que o homem nao dara a luz a estrelas; ";
    cout << "aproxima-se o tempo do mais desprezivel dos homens; ";
    cout << "Do que ja nao pode desprezar a si mesmo!" << endl;
    cout << "Digite o caracter correspondente ao livro que cita esse trecho: " << endl;
    cin >> x;

    if(x == z)
    {
        cout << "Yes! Talvez tu sejas o ultimo homem! Talvez! ";
        cout << "Avante!";
    }
    else
    {
        cout << "Noopz. Esse trexo foi retirado do livro 'Assim falou zaratustra(p.28)'";
    }
    cout << endl << endl;
    cout << "Como soam bem a musica ruim e os maus motivos Quando marchamos sobre um inimigo" << endl;
    cout << "Digite o caracter correspondente ao livro que cita esse trecho: " << endl;
    cin >> x;

    if(x == a)
    {
        cout << "YESS!" << endl;
    }
    else
    {
        cout << "Nao. Esse trexo foi retirado do livro 'Aurora'." << endl;
    }

    system("pause");
return 0;
}