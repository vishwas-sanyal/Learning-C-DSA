#include <iostream>
using namespace std;
int main()
{
    // Check if the number is prime or not
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    cout << (isPrime ? "Prime" : "non Prime") << endl;
    return 0;
}