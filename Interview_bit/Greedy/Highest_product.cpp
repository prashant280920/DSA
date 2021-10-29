#include <bits/stdc++.h>
using namespace std;

int maxp3(vector<int> &A)
{
    if (A.size() < 3)
    {
        return 0;
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    int ad1 = INT_MAX;
    int ad2 = INT_MAX;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] < 0)
        {
            if ((A[i]) < (ad1))
            {
                ad2 = ad1;
                ad1 = A[i];
            }
            else if ((A[i]) < (ad2))
            {
                ad2 = A[i];
            }
        }
        if (A[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = A[i];
        }
        else if (A[i] > max2)
        {
            max3 = max2;
            max2 = A[i];
        }
        else if (A[i] > max3)
        {
            max3 = A[i];
        }
    }
    long long int ans = max1 * max2 * max3;
    if (ad1 == INT_MAX || ad2 == INT_MAX)
    {
        return ans;
    }

    long long int ans1 = max1 * ad1 * ad2;
    return max(ans, ans1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dp[i];
    }
    cout << maxp3(dp) << endl;
    return 0;
}