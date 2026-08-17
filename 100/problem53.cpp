/*
    https://cses.fi/problemset/task/1074
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    sort(p.begin(), p.end());
    ll target = p[n/2];
    ll cost = 0;
    for(int i = 0; i < n; i++) cost += abs(p[i] - target);
    cout << cost << "\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}