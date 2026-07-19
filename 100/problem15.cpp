/*
    https://vjudge.net/contest/826394#problem/I

*/


#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    
    string s = "";
    int k = 1;
    while(n>s.size()){
        s+= to_string(k);
        k++;
    }
    cout<<s[n-1]<<endl;
}