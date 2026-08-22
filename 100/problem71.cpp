/*
    https://www.spoj.com/problems/DIVSUM/en/
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

const int MAXN = 500001;
ll divSum[MAXN];

void sieve(){
    for(int i = 1; i < MAXN; i++){
        for(int j = 2*i; j < MAXN; j += i){
            divSum[j] += i;
        }
    }
}

void solve(){
    int t;
    cin >> t;
    ostringstream out;
    while(t--){
        int n;
        cin >> n;
        out << divSum[n] << "\n";
    }
    cout << out.str();
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    solve();

    return 0;
}