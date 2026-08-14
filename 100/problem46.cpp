/*
    https://codeforces.com/problemset/problem/706/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());

    int q;
    cin >> q;
    while(q--){
        int m;
        cin >> m;
        int cnt = upper_bound(x.begin(), x.end(), m) - x.begin();
        cout << cnt << "\n";
    }
}