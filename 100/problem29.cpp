/*
    https://cses.fi/problemset/task/1084
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,m,k; cin>>n>>m>>k;


    vector<ll>applicants(n);
    vector<ll>apartments(m);

    for(auto &applicant:applicants) cin>>applicant;
    for(auto &apartment:apartments) cin>>apartment;

    sort(applicants.begin(),applicants.end());
    sort(apartments.begin(),apartments.end());
    

    ll counter = 0;
    for(ll i =0,j=0; i<n&&j<m;){
        if(abs(applicants[i]-apartments[j])<=k){
            counter++;
            i++;j++;
        }else if(abs(applicants[i]-apartments[j])>=k&&apartments[j]>applicants[i]){
            i++;
        }else{
            j++;
        }
    }

    cout<<counter<<endl;
}