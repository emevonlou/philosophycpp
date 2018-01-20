#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int n;
    cout << "Que nota voce atribuiria ao filosofo Nietzsche(de 1 a 10)? " << endl;
    cin >> n;
    if (n <= 5)
    {
        do
        {
            cout << "De toda forma, ele foi uma dinamite. " << endl;
            x = x + 1;
        } while (x <= n);
    }
    else
    {
        do
        {
            cout << "BRAVO!!" << endl;
            n = n + 1;
        } while (x <= n);
    }
    return 0;
}