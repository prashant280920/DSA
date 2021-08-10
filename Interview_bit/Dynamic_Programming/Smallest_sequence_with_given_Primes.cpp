#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    vector<int> ans;
    ans.push_back(1);
    int a=0, b=0, c=0;
    for(int i=0; i<D; i++){
        int temp = min(A*ans[a], min(B*ans[b], C*ans[c]));
        ans.push_back(temp);
        if(temp==A*ans[a]) a++;
        if(temp==B*ans[b]) b++;
        if(temp==C*ans[c]) c++;
    }
    ans.erase(ans.begin());
    //return ans;
    for(auto i: ans) cout << i<< " ";
    cout << endl;
}