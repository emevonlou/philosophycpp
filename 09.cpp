#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "Que nota você atribuiria ao filósofo Nietzsche(de 1 a 10)? " << endl;
   cin >> n;
   if(n <= 5)
   {
   do
   {
       cout << "De toda forma, ele foi uma dinamite. ";
       break;
   }
   while(n <= 10);
   }
   else
   {
    do
    {
        cout << "BRAVO!!";
        break;
    }
    while(n >= 10);
   }
   return 0;
}