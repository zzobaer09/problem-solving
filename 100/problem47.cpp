/*
    https://cses.fi/problemset/task/1085
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;

bool isFeasible(vector<ll> &arr, ll mid, ll k){
    ll count = 1;
    ll current = 0;
    for(ll i = 0; i < (ll)arr.size(); i++){
        if(current + arr[i] > mid){
            count++;
            current = arr[i];
        } else {
            current += arr[i];
        }
    }
    return count <= k;
}
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n, k;
    cin >> n >> k;
 
    vector<ll> arr(n);
    ll lo = 0, hi = 0;
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
        lo = max(lo, arr[i]);
        hi += arr[i];
    }
 
    while(lo < hi){
        ll mid = lo + (hi - lo) / 2;
        if(isFeasible(arr, mid, k)){
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
 
    cout << lo << "\n";
 
    return 0;
}