#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    int B, C;
    cin >> B;
    cin >> C;
    n = A.size();
    if(n==0){
        cout << 0 << endl;
        return 0;
    }
    int temp = C, count = 0, ans=0;
    while(temp){
        count++;
        temp/=10;
    }

    if(B>count) {
        cout << 0 << endl;
        return 0;
    }
    else if(B<count){
        if(A[0]==0){
            ans = (n-1)*pow(n,B-1);
        }else{
            ans = pow(n,B);
        }
        if(B==1 && A[0]==0) ans++;
        cout << ans << endl;
        return ans;
    }else{
        if(B==1){
            for(int i=0; i<n; i++){
                if(A[i]>C) break;
                ans++;
            }
        }
        else{
            //cout << "third ";
            vector<int> temp(B);
            for(int i=B-1; i>=0; i--){
                temp[i] = C%10;
                C/=10;
            }
            for(int i=0; i<B; i++){
                cout << temp[i]<<" ";
            }
            cout << "\n";
            count = 0;
            for(int i=0; i<n; i++){
                cout << A[i]<<" "<<temp[0]<<"\n";
                if(A[i]==0) continue;
                if(A[i]>temp[0]) break;
                count++;
            }
            cout << count<<" ";
            ans += count*pow(n,B-1);
            cout << ans << " j";
            int flag = 0, j=0;
            for(int i=0; i<n; i++){if(A[i]==temp[j]){flag=1;}};
            j++;
            while(flag==1 && j<=B-1){
                flag = 0;
                int countx=0;
                for(int i=0; i<n; i++){
                    if(A[i]>temp[j]){
                        countx++;
                    }
                    if(A[i]==temp[j]){flag=1;};
                    
                    
                }
                ans -= countx*pow(n,B-j-1);
                j++;
                cout << ans << " ";
            }
            if(j==B && flag==1){ans--;};
            
        }
        cout << ans << endl;
    }
    return 0;
}