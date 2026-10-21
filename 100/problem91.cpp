/*
    https://toph.co/p/fibonacci-numbers
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;

int fibo(ll n,ll f,ll s, ll i){
    if(n==i) return s;
    return fibo(n,s,s+f,++i);
}
 
int main(int argc, char const *argv[]){
    // #################################
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #################################

    ll n; cin>>n;

    ll ans = fibo(n,1,1,2);
    cout<<ans<<endl;
}
