/*
    https://codeforces.com/problemset/problem/1692/E
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            ll s;
            cin >> n >> s;

            vector<int> a(n);
            ll total_sum = 0;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                total_sum += a[i];
            }

            if (total_sum < s) {
                cout << -1 << "\n";
                continue;
            }
            if (total_sum == s) {
                cout << 0 << "\n";
                continue;
            }

            int max_len = 0;
            ll cur_sum = 0;
            int left = 0;

            for (int right = 0; right < n; right++) {
                cur_sum += a[right];

                while (cur_sum > s) {
                    cur_sum -= a[left];
                    left++;
                }

                if (cur_sum == s) {
                    max_len = max(max_len, right - left + 1);
                }
            }

            cout << n - max_len << "\n";
        }
    }

    return 0;
}