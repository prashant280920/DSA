#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin>>s;A.push_back(s);
    }
    n = A.size();
    int even_sum = 0, odd_sum = 0;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            even_sum += A[i];
        }else{
            odd_sum += A[i];
        }
    }
    int count = 0, a=0,b=0,e_sum = 0, o_sum = 0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            even_sum -= A[i];
        }else{
            odd_sum -= A[i];
        }

        e_sum = a+odd_sum;
        o_sum = b+even_sum;
        if(e_sum == o_sum){
            count++;
        }

        if(i%2==0){
            a+=A[i];
        }else{
            b+=A[i];
        }
    }
    cout << "Number of special elements are: "<< count << endl;

    return 0;
}