/*
    Pre-Bootcamp Contest
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;

int main(int argc, char const *argv[]){
    // #################
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #################
    
    vector<ll> arr(5);
    for(ll &v:arr) cin>>v;
    sort(arr.begin(),arr.end());
    ll max_sum = accumulate(arr.begin()+1, arr.end(),0LL);
    ll min_sum = accumulate(arr.begin(),arr.end()-1,0LL);

    cout<<min_sum<<" "<<max_sum<<endl;
}
