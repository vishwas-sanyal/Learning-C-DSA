#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is Uppercase" << endl;
    }
    else
    {
        cout << "Its not a character" << endl;
    }
    return 0;
}