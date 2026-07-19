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

    int start = 0;
    int end = 9;

    for (int i = 0; i < n; i++)
    {
        char c = assignment[i];
        if(c=='L'){
            s[start] = '1';
            start++;
        }else if(c=='R'){
            s[end] = '1';
            end--;
        }else{
            int ii = c-'0';
            s[ii] = '0';
        } 
    }
    cout<<s<<endl;
}