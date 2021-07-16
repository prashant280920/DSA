#include<bits/stdc++.h>
using namespace std;
int main(){
    string A;
    cin >> A;
    int B;
    cin >> B;
    int n = A.length();
    string ans="";
    if(B==1){
        cout << A<<endl;
        return 0;
    }
    for(int i=0; i<B; i++){
        int up=0,down=0;
        if(i==0){
            down = 2*B-2;
            int k=i;
            //cout << "st"<<k<<" "<<down<<" "<<ans<<"\n";
            while(k<n){
                ans+=A[k];
                k+=down;
              //  cout << "1st"<<k<<" "<<down<<" "<<ans<<"\n";
            }
            
        }else if(i==B-1){
            up = 2*B-2;
            int k=i;
            //cout << "nd"<<k<<" "<<up<<" "<<ans<<"\n";
            while(k<n){
                ans+=A[k];
                k+=up;
                //cout << "2st"<<k<<" "<<up<<" "<<ans<<"\n";
            }
        }else{
            int k=i,count=0;
            down = 2*B-2*i-2;
            up = 2*i;
            //cout << "rd"<<k<<" "<<up<<" "<<down<<" "<<ans<<"\n";
            while(k<n){
                if(count%2==0){
                    ans+=A[k];
                    k+=down;
                }else{
                    ans+=A[k];
                    k+=up;
                }
              //  cout << "3rd"<<k<<" "<<up<<" "<<down<<" "<<ans<<"\n";
                //cout << ans<<"\n";
                count++;
            }
        }
    }
    cout << ans<<endl;
    return 0;
}