#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &A, int B){
    int start = 0, end = A.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(A[mid]==B){
            return mid;
        }else if(A[mid]<B){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int n,s;
    cout << "Enter length of array: ";
    cin >> n;
    vector<int> A;
    cout <<"Enter elements of array in sorted form: \n";
    for(int i=0; i<n; i++){
        cin>>s;
        A.push_back(s);
    }
    int B;
    cout << "Element You want to search: ";
    cin >> B;
    s = binary_search(A,B);
    if(s==-1){
        cout << "Element not found"<<endl;
    }else{
        cout << "Element found at index: "<<s<<endl;
    }
    return 0;
}