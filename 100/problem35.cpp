/*
    PROBLEM LINK
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

    sort(a.begin(), a.end());

    for (int j = 0; j < m; j++){
        int x;
        cin >> x;
        int count = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << count;
        if (j + 1 < m) cout << ' ';
    }
    cout << '\n';

    return 0;
}