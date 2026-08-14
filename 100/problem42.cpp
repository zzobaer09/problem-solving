/*
    https://cses.fi/problemset/task/1620
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n, t;
    cin >> n >> t;
 
    vector<ll> k(n);
    ll minK = LLONG_MAX;
    for(ll i = 0; i < n; i++){
        cin >> k[i];
        minK = min(minK, k[i]);
    }
 
    ll lo = 1, hi = minK * t;
 
    while(lo < hi){
        ll mid = lo + (hi - lo) / 2;
        ll total = 0;
        for(ll i = 0; i < n; i++){
            total += mid / k[i];
            if(total >= t) break;
        }
        if(total >= t) hi = mid;
        else lo = mid + 1;
    }
 
    cout << lo << "\n";
 
    return 0;
}