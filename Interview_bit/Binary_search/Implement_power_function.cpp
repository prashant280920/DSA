#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,n,d;
    cin >> x >> n >> d;
    long long int result = 1, x1=x;
    x1 = x1%d;
    if(x==0) {
      cout << "pow("<<x<<","<<n<<")%"<<d<<": "<< 0 << endl;
      return 0;
    }
    if(n==0){
      cout << "pow("<<x<<","<<n<<")%"<<d<<": "<< 0 << endl;
      return 1;
    }
    if(d==0){
      cout << "pow("<<x<<","<<n<<")%"<<d<<": "<< 0 << endl;
      return -1;
    } 
    while(n>0){
      if(n & 1){
        result = (result*x1)%d;
      }
      n = n>>1;
      x1 = (x1*x1)%d;
    }
    if(result>=0){
      cout << "pow("<<x<<","<<n<<")%"<<d<<": "<< result << endl;
   
    }else{
      cout << "pow("<<x<<","<<n<<")%"<<d<<": "<< d+result << endl;
 
    }
}