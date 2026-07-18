/*
    https://vjudge.net/problem/CodeForces-1303A

*/


#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s; cin>>s;
        bool flag = false;
        int s_end = 0;
        int count = 0;
        for (int i = s.size()-1; i >= 0; i--)
        {
            if(s[i]=='1'){
                s_end = i; break;
            }
        }
        for (int i = 0; i < s_end; i++)
        {
            if (s[i]=='1') flag = true;

            if (flag&&s[i]=='0') count++;
        }
        cout<<count<<endl;
    }
    
}