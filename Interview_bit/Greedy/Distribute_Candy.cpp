#include <bits/stdc++.h>
using namespace std;

int candy(vector<int> &A)
{
    vector<int> left(A.size(), 1);

    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] > A[i - 1])
        {
            left[i] = max(left[i], left[i - 1] + 1);
        }
    }
    for (int i = A.size() - 2; i >= 0; i--)
    {
        if (A[i] > A[i + 1])
        {
            left[i] = max(left[i], left[i + 1] + 1);
        }
    }
    int ans = 0;
    for (int i = 0; i < A.size(); i++)
    {
        ans += left[i];
    }
    return ans;
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
    cout << candy(dp) << endl;
    return 0;
}