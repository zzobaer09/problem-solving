/*
    https://codeforces.com/problemset/problem/1913/B
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    string s;
    
    while (t--)
    {
        cin>>s;

        //zero and one count
        ll zc = 0;
        ll oc = 0;
        
        for(char &c:s){
            if(c=='0') zc++;
            else oc++;
        }
        
        for(ll i=0; i<=s.size();i++){
            if((zc==oc)&&i==0) {cout<<0<<endl; break;}
            if((zc<0||oc<0)){
                cout<<zc+oc+1<<endl;
                break;
            }

            if(s[i]=='0') oc--;
            else zc--;
        }

    }
}