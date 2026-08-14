/*
    https://www.spoj.com/problems/BSEARCH1/en/
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; cin >> n >> q;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    while(q--){
        int x;
        cin >> x;
        int pos = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        if(pos < n && arr[pos] == x) cout << pos << "\n";
        else cout << -1 << "\n";
    }

    return 0;
}