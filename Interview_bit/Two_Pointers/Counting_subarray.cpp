#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,B;
    cin>>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    cin >> B;
    n = A.size();
    int start=0, end=0,sum=A[0],count=0;
    while(start<n && end<n ){
        
        if(sum<B){
            end++;
            count+=(max(0,end-start));
            
            
            sum+=A[end];
        }else{
           
            sum-=A[start];
             start++;
        }
    }
    cout << count<<endl;
    return 0;
}