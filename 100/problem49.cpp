/*
    https://codeforces.com/problemset/problem/1201/C
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int midIdx = n / 2;

    auto feasible = [&](ll M) -> bool {
        ll cost = 0;
        for(int i = midIdx; i < n; i++){
            if(a[i] < M){
                cost += M - a[i];
                if(cost > k) return false;
            }
        }
        return true;
    };

    ll lo = a[midIdx], hi = a[midIdx] + k;

    while(lo < hi){
        ll mid = lo + (hi - lo + 1) / 2;
        if(feasible(mid)) lo = mid;
        else hi = mid - 1;
    }

    cout << lo << "\n";

    return 0;
}