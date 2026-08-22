/*
    https://www.hackerrank.com/contests/master/challenges/sherlock-and-divisors/problem
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;

    vector<ll> small, large;

    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            small.push_back(i);
            if(i != n / i){
                large.push_back(n / i);
            }
        }
    }

    ll total = (ll)small.size() + (ll)large.size();

    if(k > total){
        cout << -1 << "\n";
        return;
    }

    if(k <= (ll)small.size()){
        cout << small[k - 1] << "\n";
    } else {
        ll idx = total - k;
        cout << large[idx] << "\n";
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}