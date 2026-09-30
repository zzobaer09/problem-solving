/*
    https://cses.fi/problemset/task/1641
*/

#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll x;
    if (!(cin >> n >> x)) return 0;

    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; // 1-based original index
    }

    if (n < 3) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n - 2; i++) {
        // Pruning: if the three smallest available values exceed x, no solution is possible
        if (a[i].first + a[i + 1].first + a[i + 2].first > x) {
            break;
        }

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            ll current_sum = a[i].first + a[left].first + a[right].first;

            if (current_sum == x) {
                cout << a[i].second << " " << a[left].second << " " << a[right].second << "\n";
                return 0;
            } else if (current_sum < x) {
                left++;
            } else {
                right--;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
