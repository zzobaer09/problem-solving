/*
    https://www.hackerrank.com/contests/master/challenges/crush/problem
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    ll n, q;
    cin >> n >> q;

    vector<ll> diff(n + 2, 0);

    for(ll i = 0; i < q; i++){
        ll a, b, k;
        cin >> a >> b >> k;
        diff[a] += k;
        diff[b + 1] -= k;
    }

    ll running = 0, mx = 0;
    for(ll i = 1; i <= n; i++){
        running += diff[i];
        mx = max(mx, running);
    }

    cout << mx << "\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}