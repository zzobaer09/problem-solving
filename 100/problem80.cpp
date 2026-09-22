/*
    https://www.spoj.com/problems/BSEARCH1/
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q; cin>>n>>q;

    vector<ll> numbs(n);

    for(ll &num:numbs){
        cin>>num;
    }


    while (q--)
    {
        ll target,low,high,mid,ans; cin>>target;
        low=0; high=n-1; mid = 0; ans=-1;
        while (low<=high)
        {
            mid=low+(high-low)/2;

            if(numbs[mid]==target) {ans=mid;high=mid-1;}
            else if(numbs[mid]<target) low = mid+1;
            else high = mid-1;
        }   
        cout<<ans<<"\n";
    }
}
