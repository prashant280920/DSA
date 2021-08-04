#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,k,l;
    cin >> A;
    int n;
    cin >> n;
    vector<vector<int>> B;
    for(int i=0; i<n; i++){
        cin >> k >> l;
        B.push_back({k,l});
    }
    if(A<=3){
        cout << 0<< endl;
        return 0;
    }
    int parent[A+1];
    memset(parent, 0, sizeof parent);
    parent[1]=-1;
    int edges[A+1];
    memset(edges, 0, sizeof edges);
    n=B.size();
    for(int i=0;i<n;i++)
    {
        parent[B[i][1]]=B[i][0];
        edges[B[i][0]]++;
    }
    for(int i=A;i>1;i--)
        edges[parent[i]]+=edges[i];
    int ans=0;
    
    for(int i=2;i<=A;i++)
    {
        if(edges[i]%2==1)
            ans++;
    }
    cout << ans << endl;
    return 0;
}