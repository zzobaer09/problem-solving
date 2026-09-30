/*
    https://codeforces.com/gym/102951/problem/B
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll x;
    if (cin >> n >> x) {
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (x >= a[i]) {
                x -= a[i];
                count++;
            } else {
                break;
            }
        }

        cout << count << "\n";
    }

    return 0;
}