#include <bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >>A;
    int val = 0,n = A.length(), start=-1,end=-1 ,k=0, max_sum = 0, max_loop = 0;
    for(int i=0; i<n; i++){
        int val = (A[i]=='1')?-1:1;
        max_loop = max_loop + val;
        if(max_loop < 0){
            max_loop = 0;
            k=i+1;
        }
        if(max_sum<max_loop ){
            max_sum = max_loop;
            start = k+1;
            end = i+1;   
        }
    }
    if(start == -1){
        cout <<"start : "<< start << ", end: "<< end<<"\n";
        return 0;
    }
    cout <<"start : "<< start << ", end: "<< end<<"\n";
    return 0;
}