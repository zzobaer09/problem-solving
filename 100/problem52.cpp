/*
    https://cses.fi/problemset/task/2422
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

ll n;

ll countLE(ll x){
    ll cnt = 0;
    for(ll i = 1; i <= n; i++){
        cnt += min(n, x / i);
    }
    return cnt;
}

void solve(){
    cin >> n;
    ll total = n * n;
    ll k = (total + 1) / 2;
    ll lo = 1, hi = total;
    while(lo < hi){
        ll mid = lo + (hi - lo) / 2;
        if(countLE(mid) >= k) hi = mid;
        else lo = mid + 1;
    }
    cout << lo << "\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
}