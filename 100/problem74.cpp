/*
    https://www.hackerrank.com/contests/code-cpp-september-2015/challenges/deque-stl/problem
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k,t;
    
    cin>>t;
    
    while(t--){
        cin>>n>>k;
        vector<ll> arr(n);
        deque<ll> dq;
        
        for(ll &i:arr) cin>>i;

        for(int i=0;i<n;i++){
            if(i<k-1){
                if(!dq.empty()&&arr[dq.back()]<=arr[i]){
                    while(!dq.empty()&&arr[dq.back()]<=arr[i]) dq.pop_back();
                }
                dq.push_back(i);
            }else{
                if(!dq.empty()&&dq[0]<(i-k+1)) dq.pop_front();
                if(!dq.empty()&&arr[dq.back()]<=arr[i]){
                    while(!dq.empty()&&arr[dq.back()]<=arr[i]) dq.pop_back();
                }
                dq.push_back(i);
                cout<<arr[dq[0]]<<" ";
            }
        }
        cout<<endl;
    }

}
