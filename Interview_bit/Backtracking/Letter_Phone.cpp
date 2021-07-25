#include<bits/stdc++.h>
using namespace std;

void letterPhone(string &A, vector<string> &tel_button, int index, string asf, vector<string> &ans){
    if(index==A.length()){
        ans.push_back(asf);
        return;
    }
    string t = tel_button[A[index]-'0'];
    for(int i=0; i<t.length(); i++){
        letterPhone(A,tel_button,index+1,asf+t[i],ans );
    }
}


int main(){
    string A;
    cin >> A;
    vector<string> tel_button = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    letterPhone(A,tel_button,0,"",ans);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i]<<" ";
    }
    cout <<endl;
    return 0;
}