/*
    https://cses.fi/problemset/task/1091
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m; cin>> n>> m;

    multiset<int> mlst;

    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        mlst.insert(x);
    }
    

    cout<<endl;

    for (int i = 0; i < m; i++)
    {
        int x; cin>>x;
        auto it = mlst.upper_bound(x);
        if(it==mlst.begin()) cout<<-1<<endl;
        else {
            cout<<*--it<<endl;
            mlst.erase(it);
        }
    }
    
}