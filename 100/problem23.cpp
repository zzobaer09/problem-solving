/*
    https://codeforces.com/problemset/problem/1903/A
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<ll> v(n);
        for(ll &i: v) cin>>i;
        if(k>1) cout<<"yes"<<endl;
        else{
            if(is_sorted(v.begin(),v.end())) cout<<"yes"<<endl;
            else cout<<"no"<<endl; 
        }     
    }
}