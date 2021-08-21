#include<bits/stdc++.h>
using namespace std;

int main(){
    string A,B;
    cin >> A >> B;
    int a=0, b=0, n = A.length(), m = B.length();
    int carry = 0;
    if(n==0 || m==0){
        //return "0";
        cout << "0"<< endl;
        return 0;
    }
    vector<int> ans(n+m, 0);
    for(int i=n-1; i>=0; i--){
        int num1 = A[i]-'0';
        b = 0;
        carry = 0;
        for(int j=m-1; j>=0; j--){
            int num2 = B[j]-'0';
            int sum = num1*num2 + ans[a+b] + carry;
            carry = sum/10;
            ans[a+b] = sum%10;
            b++;
        }
        if(carry>0){
            ans[a+b] += carry;
        }
        a++;
            
    }
    int i=ans.size()-1;
    while(i>=0 && ans[i]==0) i--;
    if(i==-1){
        //return "0";
        cout << "0"<< endl;
        return 0;
    } 
    string res = "";
    while(i>=0){
        res+=to_string(ans[i]);
        i--;
    }
    cout << res << endl;
    return 0;
}