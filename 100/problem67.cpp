/*
    https://codeforces.com/problemset/problem/313/B
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;

void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> prefix(n, 0);
    for(ll i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + (s[i-1] == s[i] ? 1 : 0);
    }
    ll m;
    cin >> m;
    ostringstream out;
    while(m--){
        ll l, r;
        cin >> l >> r;
        out << prefix[r-1] - prefix[l-1] << "\n";
    }
    cout << out.str();
}
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}