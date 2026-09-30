/*
    https://cses.fi/problemset/task/1094
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        vector<ll> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        ll moves = 0;
        for (int i = 1; i < n; i++) {
            if (x[i] < x[i - 1]) {
                moves += (x[i - 1] - x[i]);
                x[i] = x[i - 1];
            }
        }

        cout << moves << "\n";
    }

    return 0;
}