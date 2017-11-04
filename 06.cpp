#include <iostream>
#include <locale.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "");    

    int i = 6;
    const char n = 'n';
    
    for(i = 0; i <= 6; i++)
    {
      if(n == n)
      {
       cout << i   << endl; 
      }
      cout << "Friedrich Nietzsche" << endl;
      cout << "O medo é o pai da moralidade." << endl;
      cout << "Aquele que abandonou a Deus prende-se em redobrada severidade à crença na moral." << endl;
      cout << "Através da moral conduz-se a humanidade mais facilmente pelo bico!" << endl;
	   
    }
    cout << "Ate entao temos um 'tu deves'." << endl;
    cout << "Precisamos de uma moral que nos entregue um 'tu sentes?'" << endl;
    cout << endl;

    return 0;
    
}