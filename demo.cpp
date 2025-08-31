#include <iostream>
using namespace std;

int decToBinary(int decNum)
{
    int ans = 0, pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int binToDecimal(int binNum)
{
    int ans = 0, pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += (rem * pow);
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
double myPow(double x, int n) // 50. Pow(x, n)
{
    // Corner Cases
    //  if (n == 0)
    //      return 1.0;
    //  if (x == 0)
    //      return 0.0;
    //  if (x == 1)
    //      return 1.0;
    //  if (x = -1 && n % 2 == 0)
    //      return 1.0;
    //  if (x = -1 && n % 2 != 0)
    //      return -1.0;

    long binForm = n;
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }
    double ans = 1;
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}
int main()
{
    cout << decToBinary(50) << endl;
    cout << binToDecimal(110010) << endl;
    cout << myPow(2.10000, 3) << endl;
    return 0;
}