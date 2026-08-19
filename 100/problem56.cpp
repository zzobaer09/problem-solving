/*
    https://codeforces.com/problemset/problem/1807/D
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<ll> pre(n + 1, 0);
    for(int i = 1; i <= n; i++){
        ll x;
        cin >> x;
        pre[i] = pre[i - 1] + x;
    }
    ll S = pre[n];
    while(q--){
        ll l, r, k;
        cin >> l >> r >> k;
        ll rangeSum = pre[r] - pre[l - 1];
        ll cnt = r - l + 1;
        ll newSum = S - rangeSum + cnt * k;
        cout << (newSum % 2 ? "YES" : "NO") << "\n";
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}