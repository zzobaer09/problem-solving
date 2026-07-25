/*
    https://codeforces.com/problemset/problem/486/A
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

ll minux_sum_fun(ll n){
    ll a = 1;
    ll sum = 0;
    while (a<=n) {
        sum += a;
        a*=2;
    }
    return sum*2;    
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;

        ll all_sum = n*(n+1)/2;
        
        ll minus_sum = minux_sum_fun(n);
        
        cout<<all_sum-minus_sum<<endl;
    }
    

}