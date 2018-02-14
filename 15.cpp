#include <cstdlib>
#include <ctime>
#include <iostream>
 
int numeroAleatorio(int menor, int maior) {
       return rand()%(maior-menor+1) + menor;
}
int main (int argc, char const* argv[])
{
srand((unsigned)time(0)); //para gerar números aleatórios reais.
int aleatorio = numeroAleatorio(30, 100);
std::cout << "Numero Aleatorio = " << aleatorio << std::endl;
return 0;
}