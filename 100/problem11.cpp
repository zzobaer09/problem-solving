/*
    https://vjudge.net/contest/829557#problem/A

*/


#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    /*
        If A>B×2/3, output Yes; otherwise, output No.
    */

    int a,b; cin>>a>>b;


    if(a>b*(2.0/3)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}