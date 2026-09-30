/*
    https://codeforces.com/problemset/problem/954/B
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
        string s;
        cin >> s;

        int max_k = 0;
        for (int k = n / 2; k >= 1; k--) {
            if (s.substr(0, k) == s.substr(k, k)) {
                max_k = k;
                break;
            }
        }

        if (max_k > 0) {
            cout << n - max_k + 1 << "\n";
        } else {
            cout << n << "\n";
        }
    }

    return 0;
}