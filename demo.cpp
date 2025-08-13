#include <iostream>
using namespace std;

int minNum(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main()
{
    cout << minNum(5, 8);
    return 0;
}