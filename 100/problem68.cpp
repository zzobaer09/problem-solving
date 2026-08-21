/*
    https://codeforces.com/problemset/problem/433/B
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<ll> v(n+1), u(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
 
    vector<ll> sortedV(v.begin()+1, v.end());
    sort(sortedV.begin(), sortedV.end());
    for(int i = 1; i <= n; i++) u[i] = sortedV[i-1];
 
    vector<ll> prefV(n+1, 0), prefU(n+1, 0);
    for(int i = 1; i <= n; i++){
        prefV[i] = prefV[i-1] + v[i];
        prefU[i] = prefU[i-1] + u[i];
    }
 
    int m;
    cin >> m;
    ostringstream out;
    while(m--){
        int type;
        ll l, r;
        cin >> type >> l >> r;
        if(type == 1) out << prefV[r] - prefV[l-1] << "\n";
        else out << prefU[r] - prefU[l-1] << "\n";
    }
    cout << out.str();
}
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}