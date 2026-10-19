/*
    Pre-Bootcamp Contest
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,sum; cin>>n;
    sum =0;
    while(n--){
        ll t; cin>>t;
        sum+=t;
    } 
    cout<<sum<<endl;
}
