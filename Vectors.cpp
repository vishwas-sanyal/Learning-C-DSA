#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec; // 0
    // vector<int> vecA = {1, 2, 3};
    // vector<int> vecB(3, 0);
    // cout << vecB[0] << endl;
    // cout << vecB[1] << endl;
    // cout << vecB[2] << endl;

    // for each loop
    // vector<char> vecC = {'a', 'b', 'c', 'd'};
    // for (char val : vecC)
    // {
    //     cout << val << endl;
    // }

    // Vector Functions
    // vector<char> vecD = {'a', 'b', 'c', 'd'};
    // cout << "size = " << vecD.size() << endl; // size of the vector
    // vecD.push_back('e');                      // enter a value at end
    // vecD.pop_back();                          // delete the last value
    // cout << vecD.front() << endl;             // show the first value
    // cout << vecD.back() << endl;              // show the last value
    // cout << vecD.at(2) << endl;               // access a value

    // Size and Capacity
    vector<int> vecE;
    vecE.push_back(1);
    vecE.push_back(2);
    vecE.push_back(3); // It will double the capacity of vector if there is not size available
    cout << vecE.size() << endl;
    cout << vecE.capacity() << endl;
    return 0;
}