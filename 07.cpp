#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");
    int vetor[5];
    
    
    for(int i = 0; i < 5; i++)
	{
        vetor[i] = i;
        cout << "Heráclito!" << endl;
        cout << "Shopenhauer!" << endl;
        cout << "Lou Salomé!" << endl;
        cout << "Goethe!" << endl;
        cout << "Schiler!" << endl;
        cout << "Richard Wagner!" << endl;
        cout << "Georges Bizet!" << endl;
        cout << "Peter gast" << endl; 
        cout << "São Inspirações Nietzscheanas!" << endl;
	}   
	
	cout << endl << endl;
	cout << "Anti inspirações Nietzscheanas!" << endl;
    cout << "Kant" << endl;
    cout << "Parmenides" << endl;
    cout << "Hegel" << endl;
    cout << "Richard Wagner!" << endl;
    cout << endl << endl;
    cout << "P.S: Nietzsche sofreu uma séria decepção ";
    cout << "Com Richard Wagner, quando percebeu o nome ";
    cout << "Dele ligado ao antisemitismo e outros ";
    cout << "preconceitos da época.";

  
    return 0;
}