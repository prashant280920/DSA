int mice(vector<int> &A, vector<int> &B) {
    map<int,int>M;
    for(int i=0;i<A.size();i++){
        M.insert({A[i],i});
    }/*
    for(int i=0;i<A.size();i++){
        if(M.find(B[i])!=M.end()){
            B.erase(B.begin()+i);
            A.erase(A.begin()+M[B[i]]);
        }
    }*/
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int n=0,maxx=0;
    for(int i=0;i<A.size();i++){
        maxx = max(maxx,abs(A[i]-B[i]));
    }
    return maxx;
}
int main(){
    vector<int>A = {-4, 2, 3};
    vector<int>B = {0, -2, 4};
    cout << mice(A,B);
}