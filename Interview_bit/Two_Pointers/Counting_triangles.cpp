#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin>>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    n = A.size();
    if(n<3) return 0;
    long long a=0,count=0;
    sort(A.begin(),A.end());
    for(int i=n-1; i>=2; i--){
        int start = 0, end = i-1;
        while(start<end){
            a = (long long)(A[start])+(A[end]);
           
            
            if(a>(long long)A[i]){
                count+=((end-start));
                //count%=1000000007;
                end--;
                //cout << count<<"\n";
            }else{
                start++;
            }
        }
        //cout << count<<"\n";
    }
    cout << count%1000000007 <<endl;
    return 0;
}