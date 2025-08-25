#include <iostream>
#include <climits>
using namespace std;

// int LSA(int num[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (target == num[i])
//         {
//             return i;
//         }
//     }
//     return -1;
// }

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
    // int num[5] = {88, 18, 73, 53, 85};       //Smallest
    // int size = sizeof(num) / sizeof(int);
    // int small = INT_MAX;
    // for (int i = 0; i < size; i++)
    // {
    //     if (num[i] < small)
    //         small = num[i];
    // }
    // cout << small << endl;
    //////////////////////////////////////////
    // int num[5] = {88, 18, 73, 53, 85}; // Largest
    // int size = sizeof(num) / sizeof(int);
    // int big = INT_MIN;
    // for (int i = 0; i < size; i++)
    // {
    //     if (num[i] < big)
    //         big = num[i];
    // }
    // cout << big << endl;

    // Linear Search
    // int num[5] = {83, 22, 44, 75, 23};
    // int size = sizeof(num) / sizeof(int);
    // int target = 84;
    // cout << LSA(num, size, target) << endl;

    int num[7] = {3, 6, 4, 5, 2, 1, 5};
    int size = sizeof(num) / sizeof(int);
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(num[start], num[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << num[i];
    }
    cout << endl;
    return 0;
}