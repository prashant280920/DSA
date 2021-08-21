#include<bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    string cur = "1", temp="";
    for(int i=1; i<A; i++){
        int n = cur.length(), t=1;
        char s = cur[0];
        for(int j=1; j<n; j++){
            if(s==cur[j]) t++;
            else{
                temp+=to_string(t);
                temp+=s;
                t=1;
                s=cur[j];
            }
        }
        if(t>=1) {
            temp+=to_string(t);
            temp+=s;
        }
        //cout << temp<<"\n";
        cur = temp;
        temp = "";
    }
    cout << cur << endl;
    return 0;
}