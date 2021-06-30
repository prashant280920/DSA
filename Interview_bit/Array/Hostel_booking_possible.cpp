#include <bits/stdc++.h>
using namespace std;


struct Interval{
    int start;
    int end;
};

bool compare(Interval A, Interval B ){
    return A.start<B.start;
}


int main(){
    int s,B;
    cin >> B;
    vector<int> arrive, depart;
    for(int i=0; i<B; i++){
        cin >> s;
        arrive.push_back(s);
    }
    for(int i=0; i<B; i++){
        cin >> s;
        depart.push_back(s);
    }
    int K;
    cin >> K;
    vector<pair<int, int>> A;
    int n = arrive.size();
    for(int i=0; i<n; i++){
        A.push_back(make_pair(arrive[i],1));
        A.push_back(make_pair(depart[i],0));
    }

    sort(A.begin(), A.end());
    int count = 0, max_hosteller=0;
    for(int i=0; i<A.size(); i++){

        if(A[i].second == 1){
            count++;
            max_hosteller = max(max_hosteller, count);
            if(max_hosteller>K){
                cout << 0 << endl;
                return 0;
            }
        }else{
            count--;
        }
    }
    cout << 1 << endl;
    return 0;
}
