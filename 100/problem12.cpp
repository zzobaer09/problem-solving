/*
    https://vjudge.net/contest/829557#problem/A

*/


#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n; cin>>t;

    for (int i = 0; i < t; i++)
    {   
        cin>>n;
        int sum =0;
        for (int j = 0; j < n-1; j++)
        {
            int tmp; cin>>tmp;
            sum+=tmp;
        }
        cout<<(-1)*sum<<endl;
    }
    return 0;

}