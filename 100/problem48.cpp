/*
    https://codeforces.com/problemset/problem/1613/C
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

int n;
ll h;
vector<ll> a;

bool check(ll k){
    ll dmg = 0;
    for(int i = 0; i < n - 1; i++){
        dmg += min(k, a[i+1] - a[i]);
        if(dmg >= h) return true;
    }
    dmg += k;
    return dmg >= h;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        cin >> n >> h;
        a.assign(n, 0);
        for(int i = 0; i < n; i++) cin >> a[i];

        ll lo = 1, hi = h;
        while(lo < hi){
            ll mid = lo + (hi - lo) / 2;
            if(check(mid)) hi = mid;
            else lo = mid + 1;
        }

        cout << lo << "\n";
    }

    return 0;
}