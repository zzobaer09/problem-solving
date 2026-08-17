/*
    https://cses.fi/problemset/task/1640
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    ll n, x;
    cin >> n >> x;

    vector<pair<ll,ll>> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    ll lo = 0, hi = n - 1;
    while(lo < hi){
        ll sum = a[lo].first + a[hi].first;
        if(sum == x){
            ll p1 = a[lo].second, p2 = a[hi].second;
            if(p1 > p2) swap(p1, p2);
            cout << p1 << " " << p2 << "\n";
            return;
        }
        else if(sum < x){
            lo++;
        }
        else{
            hi--;
        }
    }

    cout << "IMPOSSIBLE" << "\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}