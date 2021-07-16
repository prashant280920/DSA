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
    n=A.size();
    int start = 0, end=n-1,pivot=-1;
    if(A[0]>A[n-1]){
        while(start<=end){

        int mid = (start+end)/2;
        
        if(A[mid]<A[mid-1] && mid!=0){
            pivot = mid;
            break;
        }
        else if (A[mid]>A[mid+1] && mid!=n-1){
            pivot = mid+1;
            break;
        }
        else if(A[start]>A[mid]){
            end = mid-1;            
        }else if(A[end]<A[mid]){
            start = mid+1;
        }else if(start == 0 && end ==0){
            break;
        }
        else if(start == n-1 && end ==n-1){
            break;
        }
        //cout << start <<" "<<end<<"\n";
    }
    }
    start = 0;
    end = n-1;
    //cout << pivot<< endl;
    
    if(A[pivot]<=B && A[end]>=B){
        start = pivot;
        end = end;
    }
    else if (A[pivot-1]>=B && A[start]<=B){
        start = start;
        end = pivot -1;
    }
    int ans = -1;
    while(start<=end){
        
        int mid = (start+end)/2;
        if(A[mid]==B){
            cout << mid << endl;
            return mid;
        }else if(A[mid]<B){
            start= mid+1;
        }else{
            end = mid-1;
        }
    }
    cout << ans<<endl;
    


    return 0;
}