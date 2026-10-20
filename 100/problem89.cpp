/*
    Pre-Bootcamp Contest
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;

int main(int argc, char const *argv[]){
    // #################
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #################
    
    string s; cin>>s;

    stringstream ss(s);
    vector<int> v;
    int t;
    char c;
    while (ss>>t>>c){
        v.push_back(t);
    }
    

    if (c == 'A') {
        if (v[0] == 12) v[0] = 0;
    } else {
        if (v[0] != 12) v[0] += 12;
    }
    s="";
    int flag=0;
    for(int a:v){
        string d = to_string(a);
        if(d.length()<2) d="0"+d;
        s+=d;
        flag++;
        if(flag!=3) s+=":";
    }
    cout<<s<<endl;


}
