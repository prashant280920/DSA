#include<bits/stdc++.h>
using namespace std;

int main(){

    int s,A;
    cin >> A;
    vector<int> B;
    for(int i=0; i<A; i++){
        cin >> s;
        B.push_back(s);
    }

    int n = B.size();
    int left_sum[n], temp[n],right_sum[n];
    int l=0, r=0;
    for(int i=0; i<n; i++){
        l+=B[i];
        r+=B[n-1-i];
        left_sum[i] = l;
        
        right_sum[n-i-1] = r;
    }

  
    for(int i=0; i<A; i++){
        if(right_sum[0]/3 == right_sum[i]){
            temp[i] = 1;
        }else{
            temp[i] = 0;
        }
       
    }
   
    for(int i=0; i<n-1; i++){
        temp[n-i-2] += temp[n-i-1];
       
    }

    
    int left = 0, count=0;
    for(int i=0; i<n-2; i++){
        left = left_sum[i];
        if(left == right_sum[0]/3){
            count+=temp[i+2];
        }
    }
    cout << count << endl;
    
    return 0;
}