/*
    https://codeforces.com/problemset/problem/16/B
*/


#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

ll calculateMaximumMatches(vector<pair<ll,ll>> v_pair, ll n,ll m){
    int sum = 0;
    ll a,b = 0;
    for (int i = 0; i < m; i++)
    {   
        a = v_pair[i].second;
        b = v_pair[i].first;
        if(n>a){
            sum +=  a*b;
            n-=a;
        }else{
            sum+=n*b;
            break;
        }
    }
    return sum;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m; cin>>n>>m;

    vector<pair<ll,ll>> v_pair;

    ll a,b;
    ll k = m;
    while (k--)
    {
        cin>>a>>b;
        v_pair.push_back({b,a});
    }
    
    sort(v_pair.rbegin(),v_pair.rend());
    ll max_matches = calculateMaximumMatches(v_pair,n,m);
    
    cout<<max_matches<<endl;
}