#include <iostream>
#include <cmath>
using namespace std;
void val(int n)
{
    if (n == 1)
    {
        cout << n << " is a prime number.";
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << n << " is a not a prime number.";
            return;
        }
    }
    cout << n << " is a prime number.";
}
int main()
{
    val(4);
    return 0;
}