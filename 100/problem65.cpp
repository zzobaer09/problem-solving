/*
    https://codeforces.com/problemset/problem/1341/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<ll> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<int> peak(n + 1, 0);
    for(int i = 2; i <= n - 1; i++){
        if(a[i-1] < a[i] && a[i] > a[i+1]) peak[i] = 1;
    }

    vector<int> S(n + 1, 0);
    for(int i = 1; i <= n; i++) S[i] = S[i-1] + peak[i];

    int bestCount = -1, bestL = -1;
    for(int l = 1; l <= n - k + 1; l++){
        int r = l + k - 1;
        int cnt = S[r-1] - S[l];
        if(cnt > bestCount){
            bestCount = cnt;
            bestL = l;
        }
    }

    cout << (bestCount + 1) << " " << bestL << "\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}