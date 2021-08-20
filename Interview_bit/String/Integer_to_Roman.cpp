#include<bits/stdc++.h>
using namespace std;

pair<int,string> value(int a){
    vector<int> A = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    vector<string> B = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    if(a==1) return make_pair(1,"I");
    int i=0, n = A.size();
    for(; i<n; i++){
        if(a<A[i]) break; 
    }
    
    return make_pair(A[i-1], B[i-1]);
}

int main(){
    int A;
    cin >> A;
    string ans = "";
    while(A){
        pair<int, string> p = value(A);
        //cout << A << " "<< p.first << " " << p.second << "\n";
        int q = A/p.first;
        A %= p.first;
        while(q--) ans+=p.second;
    }
    cout << ans << endl;
    return 0;
}