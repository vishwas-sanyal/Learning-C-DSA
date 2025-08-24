#include <iostream>
using namespace std;

int main()
{
    // int numbers[5] = {1, 2, 3, 4, 5}; // Arrays
    // int num[10];

    // int size = sizeof(num) / sizeof(int); // Loops in Arrays
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> num[i];
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << num[i] << endl;
    // }

    // Find smallest/largest in Array
    int num[5] = {88, 18, 73, 53, 85};
    int size = sizeof(num) / sizeof(int);

    int small = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < small)
            small = num[i];
    }
    cout << small << endl;
    return 0;
}