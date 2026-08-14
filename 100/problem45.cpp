/*
    https://cses.fi/problemset/task/1660
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n, x;
    cin >> n >> x;
 
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
 
    ll left = 0, sum = 0, ans = 0;
    for(ll right = 0; right < n; right++){
        sum += a[right];
        while(sum > x && left <= right){
            sum -= a[left];
            left++;
        }
        if(sum == x) ans++;
    }
 
    cout << ans << "\n";
}