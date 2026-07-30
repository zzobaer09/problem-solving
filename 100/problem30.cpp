/*
    https://codeforces.com/problemset/problem/918/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    int n,m; cin>>n>>m;

    map<string,string> nameip;

    for (int i = 0; i < n; i++)
    {
        string Name,IP;
        cin>>Name>>IP;
        nameip[IP] = Name;
    }
    
    for (int i = 0; i < m; i++)
    {
        string Command,IP;
        cin>>Command>>IP;
        cout<<Command<<" "<<IP<<" "<<'#'<<nameip[IP.substr(0,IP.length()-1)]<<endl;
    }

    return 0;
}