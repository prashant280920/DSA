#include<bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    long long int start = 1, end = A,ans=1;
    if(A==0){
        cout<<"floor(sqrt(A)): " << 0<<endl;
        return 0;
    }
    while(start<=end){
        long long int mid = (start+end)/2;
        //cout << start<<" "<<mid<<" "<<end<<" "<<mid*mid<<"\n";
        if(mid*mid == A){
            ans = mid;
            cout<<"floor(sqrt(A)): " << ans<<endl;
            return ans;
        }else if (mid*mid<A){
            start=mid+1;
        }else{
            end=mid-1;
        }
        
    }
    if(start*start <=A){
        cout<<"floor(sqrt(A)): " << start<<endl;
    }else{
        start--;
        cout<<"floor(sqrt(A)): " << start<<endl;
    }
    return 0;
}