#include <bits/stdc++.h>
using namespace std;

// Pseudo Code
// Sort the array on the basis of start index of inteval
// then compare the start and end of adjacent Interval

struct Interval{
    int start;
    int end;
};
bool my_compare(Interval A, Interval B){
    return A.start < B.start;
}

int main(){
    int n, start,end;
    cin >> n;
    vector<Interval> A;
    for(int i=0; i<n; i++){
        cin >> start >> end;
        A.push_back({start, end});
    }
    
    sort(A.begin(), A.end(), my_compare);
    vector<Interval> B;
    start = A[0].start;
    end = A[0].end;
    for(int i=1; i<A.size(); i++){
        if(end >= A[i].start){
            end = max(A[i].end,end);
            start = min(start, A[i].start);
            continue;
        }
        else{
            B.push_back({start,end});
            start = A[i].start;
            end = A[i].end;
        }
    }
    //end = A[A.size()-1].end;
    B.push_back({start,end});
    for(int i=0; i<B.size(); i++){
        cout << "{" << B[i].start<<","<<B[i].end<< "}"<<" ";
    }
    cout << endl;
    return 0;
}