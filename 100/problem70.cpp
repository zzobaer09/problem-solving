/*
    https://codeforces.com/problemset/problem/177/D2
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    ll n, m, c;
    cin >> n >> m >> c;

    vector<ll> a(n + 1);
    vector<ll> b(m + 1);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll j = 1; j <= m; j++) cin >> b[j];

    vector<ll> diff(n + 2, 0);
    for(ll j = 1; j <= m; j++){
        ll l = j;
        ll r = j + (n - m);
        diff[l] += b[j];
        diff[r + 1] -= b[j];
    }

    ostringstream out;
    ll cur = 0;
    for(ll k = 1; k <= n; k++){
        cur += diff[k];
        a[k] = ((a[k] + cur) % c + c) % c;
        out << a[k] << " ";
    }

    cout << out.str() << "\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}