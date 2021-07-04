#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,s;
    cin >> n;
    vector<int> A;
    for (int i=0; i<n; i++){
        cin >> s; A.push_back(s);
    }
    int count1=1, count2=0, majority_index1 = 0, majority_index2 = 0;
    n = A.size();
    for(int i=1; i<n; i++){
        if(A[i]==A[majority_index1]){
            count1++;
        }
        else if(A[i]==A[majority_index2]){
            count2++;
        }else if(!count1){
            count1 = 1;
            majority_index1 = i;
        }else if(!count2){
            count2 = 1;
            majority_index2 = i;
        }
        else{
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for(int i=0; i<n; i++){
        if(A[i] == A[majority_index1]){
            count1++;
        }
        if(A[i] == A[majority_index2]){
            count2++;
        }
    }

    if(count1 > n/3){
        cout << A[majority_index1]<<endl;
        return 0;
    }
    else if (count2 > n/3){
        cout << A[majority_index2] << endl;
        return 0;
    }
    else{
        cout << -1 << endl;
        return 0;
    }
    return 0;
}