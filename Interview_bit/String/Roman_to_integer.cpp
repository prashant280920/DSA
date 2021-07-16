#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    map<char,int> m;
    m.insert({'I',1});
    m.insert({'V',5});
    m.insert({'X',10});
    m.insert({'L',50});
    m.insert({'C',100});
    m.insert({'D',500});
    m.insert({'M',1000});
    int ans = 0, n=A.length();
    for(int i=0; i<n; i++){
        if(i+1<n){
            if(m[A[i]]<m[A[i+1]]){
                ans+=(m[A[i+1]]-m[A[i]]);
                i++;
            }else{
                ans+=m[A[i]];
            }
        }else{
            ans+=m[A[i]];
        }
    }
    cout << ans<<endl;
    return 0;
}