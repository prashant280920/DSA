#include <bits/stdc++.h>
using namespace std;

int mapcolor(char c){
    if(c=='r'){
        return 0;
    }
    if(c=='g'){
        return 1;
    }
    if(c=='b'){
        return 2;
    }
    return 0;
}


int main(){

    int n,m;
    cin >> n >> m;
    vector <string> A;
    string t;
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }

    int left[3], right[3], top[3][A[0].size()], bottom[3][A[0].size()];
    memset(left,INT_MAX,sizeof left);
    memset(right,-1,sizeof right);
    memset(top,INT_MAX,sizeof top);
    memset(bottom,-1,sizeof bottom);
    for(int i=0; i<3; i++){
        left[i]=INT_MAX;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<A[0].size(); j++){
            top[i][j]=INT_MAX;
        }
        
    }
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].length(); j++){
            left[mapcolor(A[i][j])] = min(j,left[mapcolor(A[i][j])]);
            right[mapcolor(A[i][j])] = max(j,right[mapcolor(A[i][j])]);
        }
    }
    for(int i=0; i<A[0].length(); i++){
        for(int j=0; j<A.size(); j++){
            top[mapcolor(A[j][i])][i] = min(j,top[mapcolor(A[j][i])][i]);
            bottom[mapcolor(A[j][i])][i] = max(j,bottom[mapcolor(A[j][i])][i]);
        }
    }
    double area = 0;
    double d=0;
    for(int i=0; i<A[0].length(); i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                int clr = 3-j-k;
                if(j!=k && top[j][i]!=INT_MAX && bottom[k][i]!=(-1) && left[clr]!=INT_MAX){
                    // cout<<i<<" "<<j<<" "<<k<<" "<<top[j][i]<<" "<<bottom[k][i]<<" "<<left[clr]<<"\n";
                    d = ((bottom[k][i]-top[j][i]+1)*(1+i-left[clr]));
                    d = ceil(d/2);
                    area = max(area, d);
                }
                if(j!=k && top[j][i]!=INT_MAX && bottom[k][i]!=(-1) && right[clr]!=(-1)){
                    // cout<<i<<" "<<j<<" "<<k<<" "<<top[j][i]<<" "<<bottom[k][i]<<" "<<right[clr]<<"\n";
                    d = ((bottom[k][i]-top[j][i]+1)*(1+right[clr]-i));
                    d = ceil(d/2);
                    area = max(area, d);
                }
            }
        }
    }
    cout<<area<<endl;

    return 0;
}