#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Problem: 50. Pow(x, n)
double myPow(double x, int n)
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

// Kadane's Algorithm
// Problem: 53. Maximum Subarray
int maxSubArray(vector<int> &numsA)
{
    int currSum = 0, maxSum = INT_MIN;
    for (int val : numsA)
    {
        currSum += val;
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

// Problem: 136. Single Number
int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int val : nums)
    {
        ans = ans ^ val;
    }
    return ans;
}

// Morre's Voting Algorithm
// Problem: 169. Majority Element
int majorityElement(vector<int> &numsB)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < numsB.size(); i++)
    {
        if (freq == 0)
        {
            ans = numsB[i];
        }
        if (ans == numsB[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

// Problem: 121. Best Time to Buy and Sell Stock
int maxProfit(vector<int> &prices)
{
    int maxProfit = 0, bestBuy = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main()
{
    vector<int> nums = {2, 2, 1};
    vector<int> numsA = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> numsB = {2, 2, 1, 1, 1, 2, 2};
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << myPow(2.10000, 3) << endl;
    cout << singleNumber(nums) << endl;
    cout << maxSubArray(numsA) << endl;
    cout << majorityElement(numsB) << endl;
    cout << maxProfit(prices) << endl;
    return 0;
}