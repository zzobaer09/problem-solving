/*
    https://atcoder.jp/contests/arc087/tasks/arc087_a
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;cin>>n;

    map<ll,ll> __map__;
    //vector<ll>v(n);

    //for(auto &i:v) cin>>i;
    
    // for(auto &i:v){
    //     auto it = __map__.find(i);
    //     if(it!=__map__.end()){
    //         it->second++;
    //     }else __map__[i] = 1;
    // }
    for(ll i = 0; i<n; i++){
        ll x = 0; cin>>x;
        __map__[x]++;
    }
    ll removable = 0;
    for(auto &[k,v]:__map__){
        if(k>v) removable+=v;
        else if(k<v) removable += (v-k);
        else;
    }
    cout<<removable<<endl;
}