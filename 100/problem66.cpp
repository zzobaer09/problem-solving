/*
    https://codeforces.com/problemset/problem/782/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

int n;
vector<ll> x, v;

bool feasible(ld T){
    ld lo = -1e18, hi = 1e18;
    for(int i = 0; i < n; i++){
        ld left = (ld)x[i] - (ld)v[i] * T;
        ld right = (ld)x[i] + (ld)v[i] * T;
        lo = max(lo, left);
        hi = min(hi, right);
    }
    return lo <= hi;
}

void solve(){
    cin >> n;
    x.resize(n);
    v.resize(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) cin >> v[i];

    ld lo = 0, hi = 2e9;
    for(int iter = 0; iter < 100; iter++){
        ld mid = (lo + hi) / 2;
        if(feasible(mid)) hi = mid;
        else lo = mid;
    }

    cout << fixed << setprecision(9) << hi << "\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}