#include<bits/stdc++.h>
using namespace std;

int main(){

    int s,B;
    cin >> B;
    vector<int> A;
    for(int i=0; i<B; i++){
        cin >> s;
        A.push_back(s);
    }

    int n=A.size(), start=-1, end=-1;
    for(int i=1; i<n; i++){
        if(A[i-1]>A[i]){
            start = i-1;
            break;
        }
    }
    
    if(start==-1){
        cout << "Array already sorted" << endl;
        return B;
    }
    for(int i=n-1; i>0; i--){
        if(A[i]<A[i-1]){
            end=i;
            break;
        }
    }
    int mini=A[start], maxi=A[start];
    for(int i=start; i<end+1; i++){
        mini = min(mini,A[i]);
        maxi = max(maxi, A[i]);
    }
    for(int i=0; i<start; i++){
        if(A[i]>mini){
            start = i;
        }
    }
    for(int i=end+1; i<n; i++){
        if(A[i]<maxi){
            end = i;
        }
    }

    cout << "Index of Minimum subarray that require sorting : {start, end}: {" << start << ", " << end <<"}" << endl;
    return 0;
}