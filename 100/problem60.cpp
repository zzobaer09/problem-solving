/*
    https://codeforces.com/problemset/problem/816/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

const int MAXT = 200000;
ll diff_arr[MAXT + 2];
ll pre[MAXT + 2];

void solve(){
    int n, k, q;
    cin >> n >> k >> q;

    for(int i = 0; i <= MAXT + 1; i++) diff_arr[i] = 0;

    for(int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        diff_arr[l]++;
        diff_arr[r + 1]--;
    }

    ll running = 0;
    pre[0] = 0;
    for(int t = 1; t <= MAXT; t++){
        running += diff_arr[t];
        ll admissible = (running >= k) ? 1 : 0;
        pre[t] = pre[t - 1] + admissible;
    }

    while(q--){
        int a, b;
        cin >> a >> b;
        cout << (pre[b] - pre[a - 1]) << "\n";
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}