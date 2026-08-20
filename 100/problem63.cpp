/*
    https://codeforces.com/problemset/problem/596/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    int n;
    cin >> n;

    ll ans = 0, prev = 0, cur;
    for(int i = 1; i <= n; i++){
        cin >> cur;
        ans += llabs(cur - prev);
        prev = cur;
    }

    cout << ans << "\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}