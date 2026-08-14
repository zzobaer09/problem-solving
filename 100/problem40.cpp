/*
    https://codeforces.com/problemset/problem/1352/C
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll block = n - 1;
        ll q = (k - 1) / block;
        ll r = (k - 1) % block;
        cout << q * n + r + 1 << "\n";
    }
}