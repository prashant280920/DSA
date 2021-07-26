#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n>12)   
        return INT_MAX;
    int f = 1;
    for (auto i = 2; i<=n; ++i)
        f *= i;
    return f;
}
string kth_permute(int k, vector<int>& numlist)
{
    auto n = numlist.size();
    if (n==0 || k > fact(n))
        return "";
    int f = fact(n-1);
    int pos = k / f;
    k %= f;
    string ch = to_string(numlist[pos]);
    numlist.erase(numlist.begin() + pos);
    return ch + kth_permute(k, numlist);
}

int main(){

    int A,B;
    cin >> A >> B;
    vector<int> ans;
    for(int i=1; i<=A; i++) ans.push_back(i);
     
    string res=kth_permute(B-1, ans);;
    cout << res<<endl;
    return 0;
}