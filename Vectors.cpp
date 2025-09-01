#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec; // 0
    vector<int> vecA = {1, 2, 3};
    vector<int> vecB(3, 0);
    cout << vecB[0] << endl;
    cout << vecB[1] << endl;
    cout << vecB[2] << endl;

    // for each loop
    vector<char> vecC = {'a', 'b', 'c', 'd'};
    for (char val : vecC)
    {
        cout << val << endl;
    }

    // Vector Functions
    vector<char> vecD = {'a', 'b', 'c', 'd'};
    cout << "size = " << vecD.size() << endl; // size of the vector
    vecD.push_back('e');                      // enter a value at end
    vecD.pop_back();                          // delete the last value
    cout << vecD.front() << endl;             // show the first value
    cout << vecD.back() << endl;              // show the last value
    cout << vecD.at(2) << endl;               // access a value

    // Size and Capacity
    vector<int> vecE;
    vecE.push_back(1);
    vecE.push_back(2);
    vecE.push_back(3); // It will double the capacity of vector if there is not size available
    cout << vecE.size() << endl;
    cout << vecE.capacity() << endl;

    // Pair Sum - Return pair in sorted array with target sum
    /*int arr[4] = {2, 7, 11, 15};
    vector<int> numsA;
    int target = 13, n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                numsA.push_back(i);
                numsA.push_back(j);
                cout << numsA[0] << ", " << numsA[1] << endl;
            }
        }
    }*/
    // Optimal
    int arr[4] = {2, 7, 11, 15};
    vector<int> sum;
    int target = 13, n = 4;
    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairSum = arr[i] + arr[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            sum.push_back(i);
            sum.push_back(j);
            cout << sum[0] << ", " << sum[1] << endl;
            break;
        }
    }

    // Majority Element (Brute Force)
    /*vector<int> vecF = {2, 2, 1, 1, 1, 2, 2};
    int nF = vecF.size();
    for (int val : vecF)
    {
        int freq = 0;
        for (int el : vecF)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > nF / 2)
        {
            cout << "Majority Element = " << val << endl;
        }
        break;
    }*/
    // Optimized
    vector<int> vecF = {2, 2, 1, 1, 1, 2, 2};
    sort(vecF.begin(), vecF.end());
    int nF = vecF.size();
    int ansF = vecF[0], freq = 1;
    for (int i = 1; i < nF; i++)
    {
        if (vecF[i] == vecF[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ansF = vecF[i];
        }
        if (freq > nF / 2)
        {
            cout << "Majority Element = " << ansF << endl;
        }
    }
    return 0;
}