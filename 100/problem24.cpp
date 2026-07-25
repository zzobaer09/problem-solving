/*
    https://codeforces.com/problemset/problem/486/A
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll i; cin>>i;

    if(i%2==0) cout<<(i+1)/2<<endl;
    else cout<<(-(i+1)/2)<<endl;

}
