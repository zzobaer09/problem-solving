/*
    https://codeforces.com/problemset/problem/903/C
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;

    vector<ll> v(n);

    for(ll &a:v) cin>>a;

    sort(v.begin(),v.end());

    int box_count = 0;
    
    int K = 0;
    for (int i = 0; i < n; i++)
    {   
        if(v[i]==-1) continue;
        K = i;
        ll kv = v[K];
        for (int j = K+1; j < n; j++)
        {
            if(kv<v[j]&&kv!=-1&&v[j]!=-1){
                kv = v[j];
                v[j] = -1;
                K = j;
            }

        }
        v[i] = -1;
        box_count++;
    }
    cout<<box_count<<endl;
}