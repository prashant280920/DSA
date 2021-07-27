#include<bits/stdc++.h>
using namespace std;


int main(){
    int A;
    cin >> A;
    int arr[10] = {0};
    int b = A , len = 0;
    bool ar[4] = {false};
    while(b){
        len++;
        if(b%100 == 23) ar[0] = true;
        if(b%100 == 32) ar[1] = true;
        if(b%100 == 24) ar[2] = true;
        if(b%100 == 42) ar[3] = true;
        arr[b%10]++;
        
        b /= 10;
    }
    for(int i=0; i<10; i++){
        if(arr[i]>1){
            cout << 0 << endl;
            return 0;
        }
    }
    if(arr[1]==1 && len!=1){
        cout << 0 << endl;
        return 0;
    }
    if(arr[0]==1 && len!=1){
        cout << 0 << endl;
        return 0;
    }
    if((ar[0] || ar[1]) && arr[6]==1){
        cout << 0 << endl;
        return 0;
    }
    if((ar[2] || ar[3]) && arr[8]==1){
        cout << 0 << endl;
        return 0;
    }
    
    cout << 1 << endl;
    return 1;
}