/*
    https://usaco.org/index.php?page=viewproblem2&cpid=572&lang=en
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;

    vector<ll> a(n + 1), prefix(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << "\n";
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}