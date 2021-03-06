#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m = A.size(), n = B.size();
    
    if(m < n) return findMedianSortedArrays(B, A);
    
    int l = 0, h = 2*n;
    
    while(l <= h)
    {
        int mid = l + (h-l)/2;
        int mid1 = m+n - mid;
        
        double L1 = (mid1 == 0) ? INT_MIN : A[(mid1-1)/2];	
        double L2 = (mid == 0) ? INT_MIN : B[(mid-1)/2];
        double R1 = (mid1 == m*2) ? INT_MAX : A[(mid1)/2];
        double R2 = (mid == n*2) ? INT_MAX : B[(mid)/2];
        
        if (L1 > R2) l = mid + 1;		
        else if (L2 > R1) h = mid - 1;	
        else return (max(L1,L2) + min(R1, R2)) / 2;	
    }
    return 0.0;
}
int main(){
    int n, m , s;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    cin >> m;
    vector<int> B;
    for(int i=0; i<m; i++){
        cin >> s;
        B.push_back(s);
    }
    
    cout <<  findMedianSortedArrays(A, B) << endl;
    
    
    return 0;
}