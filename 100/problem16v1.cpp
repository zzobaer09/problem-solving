/*
    https://vjudge.net/contest/826394#problem/J
*/


#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin>>n;
    char c;
    string s = "0000000000";
    
    string assignment; cin>>assignment;

    for (int i = 0; i < n; i++)
    {
        c = assignment[i];
        if(c=='L'){
            for (int j = 0; j < 10; j++)
            {
                if (s[j]=='0')
                {
                    s[j]='1';
                    break;
                }
            }
                       
        }else if(c=='R'){
            for (int j = 9; j >= 0; j--)
            {
                if (s[j]=='0')
                {
                    s[j]='1';
                    break;
                }    
            }
        }else{
            s[c-'0'] = '0';
        }   
    }
    cout<<s<<endl;
}