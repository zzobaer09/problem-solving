/*
    https://www.hackerrank.com/contests/master/challenges/sherlock-and-divisors/problem
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
void solve(){
    ll n;
    cin >> n;
    ll cnt = 0;
    for(ll i = 1; i*i <= n; i++){
        if(n % i == 0){
            ll j = n / i;
            if(i % 2 == 0) cnt++;
            if(j != i && j % 2 == 0) cnt++;
        }
    }
    cout << cnt << "\n";
}
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) solve();
}