#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int A;
    cin >> A;
    // We will apply two approach 
    // first approach is we loop for n/2 element an check that the number i and A-i both are prime or not
    // using isPrime() function
    vector<int> B;
    for(int i=2; i<=(A/2); i++){
     
        if(isPrime(i) && isPrime(A-i)){
            B.push_back(i);
            B.push_back(A-i);
            break;
        }
    }
  
    cout << "Using First Approach: "<< B[0]<<" and " << B[1] << " are two prime numbers\n";

    // Second Approach : using Sieve of eratosthenes
    int n = A;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    B = {};
    for(int i=2; i<n+1; i++){
        if(prime[i] && prime[n-i]){
            B.push_back(i);
            B.push_back(n-i);
            break;
        }
    }
    cout << "Using Sieve of eratosthenes Approach: "<< B[0]<<" and " << B[1] << " are two prime numbers\n";
    return 0;
}