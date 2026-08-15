/*
    https://codeforces.com/problemset/problem/1498/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    ll n, W;
    cin >> n >> W;

    vector<ll> w(n);
    for(int i = 0; i < n; i++){
        cin >> w[i];
    }

    sort(w.rbegin(), w.rend());

    multiset<ll> rows;

    for(int i = 0; i < n; i++){
        auto it = rows.lower_bound(w[i]);
        if(it != rows.end()){
            ll rem = *it - w[i];
            rows.erase(it);
            rows.insert(rem);
        } else {
            rows.insert(W - w[i]);
        }
    }

    cout << rows.size() << "\n";
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