#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
using namespace std;

int main(int argc, char *argv[])
{
    const char *validchars = "EmanuelLevinas!";
    char *novastr;

    int str_len;

srand(time(NULL));


// tamanho da string
str_len = (rand() % 30 );

// se for menor que cinco, configura para ser maior que cinco
str_len += str_len < 5 ? 5 : 0;


// aloca memoria
novastr = (char*)malloc((str_len + 1)* sizeof(char));


for ( int i = 0; i < str_len; i++ ) {
    novastr[i] = validchars[ rand() % strlen(validchars) ];
    novastr[i + 1] = 0x0;
    cout << *validchars << endl;
}
    return 0;
}