/*
    https://cses.fi/problemset/task/1090
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x; cin>>n>>x;
    vector<ll> v(n);

    for (auto&&w : v) cin>>w;
    
    sort(v.begin(),v.end());
    ll hi = n-1; ll lo = 0;
    ll count = 0;
    for (int i = 0; i<n; i++)
    {
        if(lo>hi) break;
        else{
            if (v[lo]+v[hi]<=x)
            { 
                count++;
                lo++;
                hi--;
            }else{
                count++;
                hi--;
            }
        }
    }
    cout<<count<<endl;
}