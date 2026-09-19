/*
    https://cses.fi/problemset/task/1094
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;

    vector<ll> a(n);
    
    for(ll &i:a) cin>>i;
    ll count=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]) {
            count+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<count<<endl;
}
