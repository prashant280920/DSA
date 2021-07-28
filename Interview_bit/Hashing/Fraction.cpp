#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    long int n = A, d = B;
    string ans = "";
    if((A<0) ^ (B<0)) ans+='-';
    n = abs(n); d = abs(d);
    ans+=to_string(n/d);
    if(n%d==0){
        cout << ans << endl;
        return 0;
    }
    ans+='.';
    long int rem = n%d;
    unordered_map<int,int> m;
    for(; rem; rem%=d){
        if(m.find(rem)!=m.end()){
            ans.insert(m[rem],"(");
            break;
        }else m[rem] = ans.size();
        rem *=10;
        ans+=to_string(rem/d);
        rem = rem%d;
    }
    ans+=")";
    cout << ans << endl;
    return 0;
}