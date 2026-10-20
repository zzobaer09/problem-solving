/*
    Pre-Bootcamp Contest
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;

vector<double> plusMinus(vector<ll>arr){
    ll n = arr.size();
    ll p_count,n_count,z_count;
    p_count=0;n_count=0;z_count=0;

    for(ll a:arr){
        if(a<0) n_count++;
        else if(a==0) z_count++;
        else p_count++;
    }
    return vector<double>{p_count*1.0/n,n_count*1.0/n,z_count*1.0/n};
}

int main(int argc, char const *argv[]){
    // #################
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #################
    
    ll n; cin>>n;
    vector<ll> arr(n);

    for(ll &a:arr) cin>>a;
    vector<double> r_array = plusMinus(arr); 
    for(double a:r_array) cout<<fixed<<setprecision(8)<<a<<endl;
}
