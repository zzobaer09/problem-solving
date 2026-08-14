/*
    https://codeforces.com/problemset/problem/279/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll t;
    cin >> n >> t;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int left = 0, ans = 0;
    ll sum = 0;

    for(int right = 0; right < n; right++){
        sum += a[right];
        while(sum > t){
            sum -= a[left];
            left++;
        }
        ans = max(ans, right - left + 1);
    }

    cout << ans << endl;

    return 0;
}