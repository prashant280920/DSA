#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin>>s;A.push_back(s);
    }

    n=A.size();
    int a = n/2;
    int MINI[a], MAXI[a];
    int t=0, m=0;
    //cout << a << b;
    for(int i=0; i<a; i++){
        if(A[i]>A[a+i]){
            MAXI[t] = A[i];
            MINI[m] = A[a+i];
        }else{
            MAXI[t] = A[a+i];
            MINI[m] = A[i];
        }
        //cout << MINI[m] << " " << MAXI[t]<< "\n";
        t++;
        m++;
        //cout << A[i] << " " << A[a+i]<< "\n";

    }
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i=0; i<a; i++){
        mini = min(mini, MINI[i]);
        maxi = max(maxi, MAXI[i]);
    }
    
    int c = A[n-1];

    maxi = max(c, maxi);
    mini = min(c, mini);
    cout << "Maximum Value: " << maxi << " Minimum Value: "<<mini<<endl;
    return 0;
}