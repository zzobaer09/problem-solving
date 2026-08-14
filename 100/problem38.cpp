/*
    https://cses.fi/problemset/task/1090
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++) {
        int cnt = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << cnt;
        if (i + 1 < m) cout << " ";
    }
    cout << "\n";

    return 0;
}