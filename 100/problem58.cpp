/*
    https://www.spoj.com/problems/UPDATEIT/en/
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
void solve(){
    ll n, u;
    cin >> n >> u;
 
    vector<ll> diff(n + 1, 0);
 
    for(ll i = 0; i < u; i++){
        ll l, r, val;
        cin >> l >> r >> val;
        diff[l] += val;
        diff[r + 1] -= val;
    }
 
    vector<ll> arr(n);
    arr[0] = diff[0];
    for(ll i = 1; i < n; i++){
        arr[i] = arr[i - 1] + diff[i];
    }
 
    ll q;
    cin >> q;
    while(q--){
        ll idx;
        cin >> idx;
        cout << arr[idx] << "\n";
    }
}
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}