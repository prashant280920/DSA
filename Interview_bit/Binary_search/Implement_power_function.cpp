#include<bits/stdc++.h>
using namespace std;

long long int power(long long int x,long long int n,long long int d){
    cout << x<<" "<<n<<"\n";
    if(x==0 && n==0) return 0;
    if(n==0) return 1;
    if(n==1) return x%d;
    long long int temp = power(x,n/2,d);
    cout << "temp"<<temp<<"\n";
        if(n%2==0) return ((temp%d)*(temp%d))%d;
        else return ((x%d)*(temp%d)*(temp%d))%d;
    
    
}

int main(){
    int x,n,d;
    cin >> x >> n >> d;
    if (x == 0) return 0;
    if (d == 0) return -1;
    if (n == 0) return 1;
long long res = x;
long long rem_fix = 1;
while (n > 1)
{

  if (n % 2 == 1)
  {
    rem_fix = (rem_fix * res)%d;
  }
  res = ((res%d) * (res%d)) % d;
  n = n / 2;
}
res = (res *rem_fix) % d;
if (res < 0)
  res += d;
return res;
    
    return 0;
}