#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    char alphabets[27];
    memset(alphabets,0,sizeof alphabets);
    int n = A.length();
    for(int i=0; i<n; i++) alphabets[A[i]-'a']++;
    int count1=0;
    for(int i=0; i<27; i++){
        if(n%2==0){
            if(alphabets[i]%2){
                cout << 0<<endl;
                return 0;
            } 
        }
        else{
            if(alphabets[i]%2){
                count1++;
                if(count1>1){
                    cout << 0<<endl; 
                    return 0;
                } 
            }
        }
    }
    cout << 1 << endl;
    return 1;
}