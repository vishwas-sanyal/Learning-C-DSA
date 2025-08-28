#include <iostream>
#include <climits>
using namespace std;

int LSA(int numC[], int sizeC, int target)
{
    for (int i = 0; i < sizeC; i++)
    {
        if (target == numC[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5}; // Arrays

    int num[10];
    int size = sizeof(num) / sizeof(int); // Loops in Arrays
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << endl;
    }

    // Find smallest/largest in Array
    int numA[5] = {88, 18, 73, 53, 85}; // Smallest
    int sizeA = sizeof(numA) / sizeof(int);
    int small = INT_MAX;
    for (int i = 0; i < sizeA; i++)
    {
        if (numA[i] < small)
            small = numA[i];
    }
    cout << small << endl;
    //////////////////////////////////////////
    int numB[5] = {88, 18, 73, 53, 85}; // Largest
    int sizeB = sizeof(numB) / sizeof(int);
    int big = INT_MIN;
    for (int i = 0; i < sizeB; i++)
    {
        if (numB[i] > big)
            big = numB[i];
    }
    cout << big << endl;

    // Linear Search
    int numC[5] = {83, 22, 44, 75, 23};
    int sizeC = sizeof(numC) / sizeof(int);
    int target = 44;
    cout << LSA(numC, sizeC, target) << endl;

    // Reverse an Array
    int numD[7] = {3, 6, 4, 5, 2, 1, 5};
    int sizeD = sizeof(numD) / sizeof(int);
    int start = 0, end = sizeD - 1;
    while (start < end)
    {
        swap(numD[start], numD[end]);
        start++;
        end--;
    }
    for (int i = 0; i < sizeD; i++)
    {
        cout << numD[i];
    }
    cout << endl;

    // Subarray
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    // Max Subarray Sum
    /*int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Max Subarray Sum = " << maxSum << endl;*/

    // Kadane's Algorithm
    // Problem: 53. Maximum Subarray
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
            currSum = 0;
    }
    cout << "Max Subarray Sum = " << maxSum << endl;
    return 0;
}