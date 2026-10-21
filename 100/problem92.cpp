/*
    PROBLEM LINK
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string,int> marks;
    int q;cin>>q;
    while (q--)
    {
        int t; cin>>t;
        string s; cin>>s;
        if(t==1){
            int m; cin>>m;
            marks[s]+=m;
        }
        else if(t==2){
            marks[s]=0;    
        }
        else if(t==3){
            cout<<marks[s]<<endl;
        }
    }
    

}
