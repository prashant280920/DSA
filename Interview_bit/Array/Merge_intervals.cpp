#include <bits/stdc++.h>
using namespace std;

// Pseudo Code
// Sort the array on the basis of start index of inteval
// then compare the start and end of adjacent Interval

struct Interval{
    int start;
    int end;
};

int main(){
    int n, start,end;
    cin >> n;
    vector<Interval> A;
    for(int i=0; i<n; i++){
        cin >> start >> end;
        A.push_back({start, end});
    }
    int ins=0,s=-1, e=-1;
    n = A.size();
    vector<Interval> c;
    Interval newInterval;
    cin>>start>>end;
    newInterval = {start,end};
    int temp = 0;
    if (newInterval.start>newInterval.end){
        temp = newInterval.start;
        newInterval.start = newInterval.end;
        newInterval.end = temp;
    }
    for(int i=0; i<n; i++){
        if(newInterval.start<A[i].start && ins==0){
            c.push_back(newInterval);
            ins =1;
            cout << newInterval.start<<newInterval.end;
        }
        c.push_back(A[i]);

    }
    if(ins ==0){
        c.push_back(newInterval);
    }
    for(int i=0; i<n+1; i++){
        cout << "{" << c[i].start<<","<<c[i].end<< "}"<<" ";
    }
    cout << "\n";
    vector<Interval> B;
    start=c[0].start; end = c[0].end;
    cout << n << "\n";
    for(int i=1; i<n+1; i++){
        if(end>c[i].start){
            cout << c[i].start<<c[i].end;
            end = max(end, c[i].end);
            start =  min(start,c[i].start);
            cout << start << " "<<end;
            continue;
        }
        else{
            B.push_back({start,end});
            start = c[i].start;
            end = c[i].end;
        }
        cout << start << " "<<end;
    }
    B.push_back({start,end});
   
    // vector<Interval> B;
    // start = A[0].start;
    // end = A[0].end;
    // for(int i=1; i<A.size(); i++){
    //     if(end >= A[i].start){
    //         end = max(A[i].end,end);
    //         start = min(start, A[i].start);
    //         continue;
    //     }
    //     else{
    //         B.push_back({start,end});
    //         start = A[i].start;
    //         end = A[i].end;
    //     }
    // }
    //end = A[A.size()-1].end;
    //B.push_back({start,end});
    for(int i=0; i<B.size(); i++){
        cout << "{" << B[i].start<<","<<B[i].end<< "}"<<" ";
    }
    cout << endl;
    return 0;
}