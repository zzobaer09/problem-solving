/*
    https://cses.fi/problemset/task/1630
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin>>n;

    vector<pair<ll,ll>> tasks(n);

    for(auto &[e1,e2]:tasks){
        cin>>e1>>e2;
    }

    ll sum = 0;
    ll t=0;
    sort(tasks.begin(),tasks.end());

    for(auto &[e1,e2]:tasks){
        t+=e1;
        sum+=e2-t;
    }
    
    cout<<sum<<endl;
}
