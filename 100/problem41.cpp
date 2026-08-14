/*
    https://codeforces.com/problemset/problem/1873/E
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
        int n;
        ll x;
        cin >> n >> x;

        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        ll lo = 1, hi = 2000000001LL;

        while(lo < hi){
            ll mid = lo + (hi - lo + 1) / 2;

            ll water = 0;
            for(int i = 0; i < n; i++){
                if(a[i] < mid) water += (mid - a[i]);
                if(water > x) break;
            }

            if(water <= x) lo = mid;
            else hi = mid - 1;
        }

        cout << lo << "\n";
    }
}