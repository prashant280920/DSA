#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string t;
    vector<string> A;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }
    map<map<char, int>, vector<int>> m;
    n = A.size();
    for(int i=0; i<n; i++){
        map<char, int> temp;
        vector<int> indexes;
        //int t = A[i].length();
        for(auto j : A[i]) ++temp[j];
        if(m.find(temp)!=m.end()) m[temp].push_back(i+1);
        else{
            indexes.push_back(i+1);
            m.insert({temp,indexes});
        }
    }

    //n = m.size();
    for(auto it = m.begin(); it!=m.end(); it++){
        for(auto i: it->first) cout<<i.first;
        cout <<": ";
        for(auto i: it->second) cout << i<<" ";
        cout << "\n";
    }

    return 0;
}