#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin >> A>> B;
    int sign = 1;
    if (A<0){sign = -sign;}
    if (B<0){sign = -sign;}
     
    unsigned long long tmp = abs((long long)A);
    unsigned long long tmp2 = abs((long long)B);
            
    unsigned long c = 1;
    while (tmp2 < tmp){
        tmp2 = tmp2<<1;    
        c = c<<1;
        //cout <<"tmp2: "<<tmp2<<" temp1: "<<tmp<<"\n";
        //cout <<"c: "<<c<<"\n";
    }
     
    long long res = 0;
    while (tmp>=abs((long long)B)){
        while (tmp2 <= tmp){

            tmp -= tmp2;
            res = res+c;
            //cout <<"tmp2: "<<tmp2<<" temp1: "<<tmp<<"\n";
          //  cout <<"res: "<<res<<"\n";
        }
        //cout <<"tmp2: "<<tmp2<<" temp1: "<<tmp<<"\n";
        //cout <<"c: "<<c<<"\n";
        tmp2=tmp2>>1;
        c=c>>1;    
    }
     
    int a = (sign*res >= INT_MAX ||  sign*res < INT_MIN) ? INT_MAX : sign*res;
    cout << a <<endl;
    return 0;
}