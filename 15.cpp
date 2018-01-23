#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
using namespace std;

int main(int argc, char *argv[])
{
    const char *levinas = "E,m,a,n,u,e,l,L,e,v,i,n,a,s!";
    char *newstr;

    int tamstr;

    srand(time(NULL));

    // Tamanho da string.
    tamstr = (rand() % 30);

    // se for menor que cinco, configura para ser maior que cinco.
    tamstr += tamstr < 5 ? 5 : 0;

    // aloca memoria
    newstr = (char *)malloc((tamstr + 1) * sizeof(char));

    for (int i = 0; i < tamstr; i++)
    {
        newstr[i] = levinas[rand() % strlen(levinas)];
        newstr[i + 1] = 0x0;
        cout << *levinas << endl;
    }
    return 0;
}