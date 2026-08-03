/*
    https://codeforces.com/problemset/problem/4/C
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;

    map<string,int> usrname;


    while (n--)
    {
        string usr; cin>>usr;

        if(usrname[usr]>=1){
            string newusr = usr+ to_string(usrname[usr]);
            cout<<newusr<<endl;
            usrname[usr]++;
            usrname[newusr]++;
        }else{
            usrname[usr]++;
            cout<<"OK"<<endl;
        }
    }
    
}