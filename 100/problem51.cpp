/*
    https://codeforces.com/problemset/problem/165/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

bool check(ll v, ll k, ll n){
    ll sum = 0;
    ll term = v;
    while(term > 0){
        sum += term;
        if(sum >= n) return true;
        term /= k;
    }
    return sum >= n;
}

void solve(){
    ll n, k;
    cin >> n >> k;

    ll lo = 1, hi = n;
    while(lo < hi){
        ll mid = lo + (hi - lo) / 2;
        if(check(mid, k, n)) hi = mid;
        else lo = mid + 1;
    }

    cout << lo << "\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}