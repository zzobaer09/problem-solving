/*
    https://www.spoj.com/problems/RANGESUM/en/
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    int q;
    cin >> q;

    int bufSize = n + q;
    vector<ll> buf(bufSize + 1, 0);   // 1-indexed buffer

    // place initial array at the right end: buf[q+1 .. q+n]
    for (int i = 1; i <= n; i++) {
        buf[q + i] = a[i];
    }

    int cnt = 0;                      // number of Op2's seen so far
    vector<array<int,3>> queries;     // {head_at_time, l, r}
    queries.reserve(q);

    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            cin >> l >> r;
            int head = q + 1 - cnt;
            queries.push_back({head, l, r});
        } else {
            ll x;
            cin >> x;
            cnt++;
            buf[q + 1 - cnt] = x;
        }
    }

    // static prefix sums over the fully-filled buffer
    vector<ll> prefix(bufSize + 1, 0);
    for (int i = 1; i <= bufSize; i++) {
        prefix[i] = prefix[i - 1] + buf[i];
    }

    ostringstream oss;
    for (auto &qu : queries) {
        int head = qu[0], l = qu[1], r = qu[2];
        int bufL = head + l - 1;
        int bufR = head + r - 1;
        ll ans = prefix[bufR] - prefix[bufL - 1];
        oss << ans << "\n";
    }

    cout << oss.str();

    return 0;
}