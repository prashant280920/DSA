//clear adj and visited vector declared globally after each test case
//check for long long overflow
//while adding and subs check if mod becomes -ve
//while using an integer directly in a builtin function add ll
//Mod wale question mein last mein if dalo ie. Ans<0 then ans+=mod;
//Dont keep array name as size or any other key word

#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
#define Fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define f(i, n) for (long long int i = 0; i < n; i++)
#define ll long long int
#define fo(i, a, b) for (long long int i = a; i <= b; i++)
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long int>>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define mll map<ll,ll>
#define umll unordered_map<ll,ll>
#define newl cout<<"\n"
#define pb push_back
#define mp make_pair
#define fi first
#define se second
const ll inf = 1e9 + 7;
const ll mod = 998244353;
#define MAX 100002

int fen[MAX];

void update(ll i,ll val){
    while(i<MAX){
        fen[i]+=val;
        i+=(i&(-i));
    }
}

ll sum(ll i){
    ll s = 0;
    while(i>0){
        s+=fen[i];
        i = i-(i&(-i));
    }
    return s;
}

ll rangesum(ll l,ll r){
    return sum(r)-sum(l-1);
}

//to find lowerbound of val
ll find(ll val){
    ll curr = 0,ans = 0,prevsum = 0;
    for(ll i = log2(MAX);i>=0;i--){
        if(fen[curr+(1<<i)]+prevsum<val){
            curr += (1<<i);
            prevsum += fen[curr];
        }
    }
    return (curr+1);
}

int main(){
    Fio;
    
    return 0;
}