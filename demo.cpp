#include <iostream>
using namespace std;
int main()
{
    // Print numbers 1 to n
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // while loop
    int i = 1;
    while (i <= n)
    {
        cout << i;
        i++;
    }
    cout << endl;
    // for loop
    for (int j = 1; j <= n; j++)
    {
        cout << j;
    }
    cout << endl;
    // do-while loop
    int k = 1;
    do
    {
        cout << k;
        k++;
    } while (k <= n);
    cout << endl;

    return 0;
}