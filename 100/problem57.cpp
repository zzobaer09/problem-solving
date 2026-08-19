/*
    https://codeforces.com/problemset/problem/368/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<bool> seen(100005, false);
    vector<int> ans(n + 1);
    int distinct = 0;

    for(int i = n; i >= 1; i--){
        if(!seen[a[i]]){
            seen[a[i]] = true;
            distinct++;
        }
        ans[i] = distinct;
    }

    for(int i = 0; i < m; i++){
        int l;
        cin >> l;
        cout << ans[l] << "\n";
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}