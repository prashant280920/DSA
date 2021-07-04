#include<bits/stdc++.h>
using namespace std;


bool isina(double a){
    if (a >=0 && a<2.0/3.0) return true;
    return false;
}
bool isinb(double a){
    if (a >=2.0/3.0 && a<1.0) return true;
    return false;
}
bool isinc(double a){
    if (a >=1.0 && a<2.0) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    double s;
    vector<double> B;
    for(int i=0; i<n; i++){
        cin >> s;
        B.push_back(s);
    }
    double max1a=INT_MIN, max2a = INT_MIN, max3a = INT_MIN, max1b = INT_MIN;
    double min1a = INT_MAX, min1b = INT_MAX, min1c = INT_MAX, min2a = INT_MAX, min2b = INT_MAX;
    n = B.size();
    for (int i=0; i<n; i++){
        if(max1a<B[i] && isina(B[i])){
            max3a = max2a;
            max2a = max1a;
            max1a = B[i];
        }else if(max2a<B[i] && isina(B[i])){
            max3a = max2a;
            max2a = B[i];
            
        }else if(max3a<B[i] && isina(B[i])) max3a = B[i];
        else if(max1b<B[i] && isinb(B[i])) max1b = B[i];

        if(min1a>B[i] && isina(B[i])){
            min2a = min1a;
            min1a = B[i];
        }else if (min2a > B[i] && isina(B[i])) min2a = B[i];
        else if(min1b>B[i] && isinb(B[i])){
            min2b = min1b;
            min1b = B[i];
        }else if (min2b > B[i] && isinb(B[i])) min2b = B[i];
        else if (min1c > B[i] && isinc(B[i])) min1c = B[i];
    }
    if(max1a + max2a + max3a >1.0) {cout << "True" <<endl; return 1;}
    else if( max1a + max2a + max1b>1.0 && max1a+max2a+max1b < 2.0) {cout << "True" <<endl; return 1;}
    else if( min1a + min2a + min1b>1.0 && min1a+min2a+min1b < 2.0) {cout << "True" <<endl; return 1;}
    else if(min1a+min2a+min1c < 2.0) {cout << "True" <<endl; return 1;}
    else if(min1a+min1b+min2b < 2.0) {cout << "True" <<endl; return 1;}
    else if(min1a+min1b+min1c < 2.0) {cout << "True" <<endl; return 1;}
    cout << "False" << endl;
    return 0;
}