/*
    https://codeforces.com/problemset/problem/427/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    ll n, t, c;
    cin >> n >> t >> c;

    ll ans = 0, run = 0;

    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;

        if(x <= t) run++;
        else run = 0;

        if(run >= c) ans++;
    }

    cout << ans << "\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}