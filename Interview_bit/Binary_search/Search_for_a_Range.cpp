#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, B;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    cin >> B;
    int n = A.size();
    int start = 0, end = n-1, s=-1, e=-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(A[mid]==B ){
            if(mid!=0 && A[mid-1]<A[mid]){
                s=mid;
                e=mid;
                break;
            }else if(mid==0){
                s=0;
                e=0;
                break;
            }else{
                end = mid-1;
            }
        }else if(A[mid]<B){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    //cout << s <<" " << e<< "\n";
    start = 0, end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
       // cout << mid << "\n";
        if(A[mid]==B ){
            if(mid!=n-1 && A[mid+1]>A[mid]){
                e=mid;
                break;
            }else if(mid==n-1){
                e=n-1;
                break;
            }else{
                start = mid+1;
            }
        }else if(A[mid]<B){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
   // cout << s <<" " << e<< "\n";
    vector<int> ans;
    ans.push_back(s);
    ans.push_back(e);
    for(auto i: ans) cout << i << " ";
    cout << endl;
    return 0;
}