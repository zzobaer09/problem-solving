/*
    https://vjudge.net/contest/826394#problem/H

*/


#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    char tmpK;
    int tmpV;
    string s;
    int k,m; 
    map<char,int> val;
    int sum = 0;
    while (t--)
    {
        cin>>k;
        while (k--)
        {
            cin>>tmpK>>tmpV;
            val[tmpK] = tmpV;
        }
        cin>>m;
        cin.ignore();

        while (m--)
        {
            getline(cin,s);
            for (int i = 0; i < s.size(); i++)
            {
                if(val.count(s[i])) sum += val[s[i]];
            }
        }
        cout << sum / 100 << "." << setfill('0') << setw(2) << sum % 100 << "$\n";
        val.clear();
        sum = 0;
    }
    
}