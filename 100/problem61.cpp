/*
    https://codeforces.com/problemset/problem/18/C
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<ll> prefix(n + 1, 0);
    for(int i = 1; i <= n; i++){
        ll x;
        cin >> x;
        prefix[i] = prefix[i - 1] + x;
    }
    ll total = prefix[n];
    if(total % 2 != 0){
        cout << 0 << "\n";
        return;
    }
    ll target = total / 2;
    ll ways = 0;
    for(int i = 1; i <= n - 1; i++){
        if(prefix[i] == target) ways++;
    }
    cout << ways << "\n";
}
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}