#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    int B;
    cin >> B;

    n = A.size();
    int start = 0, end = n-1, i=-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(A[mid]==B){
            i=mid;
            break;
        }
        else if(A[mid]<B){
            start=mid+1;
            i=start;
        }else{
            end = mid-1;
        }
        //cout << mid;
    }
    if(i==-1){
        return 0;
    }
    //cout << i;
    while(A[i+1]<=B && i+1<n){
        i++;
    }
    
    cout <<"Number of elements less than "<<B<<" in the array are: "<< i+1 <<endl;
    return 0;

}