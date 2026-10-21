/*
    PROBLEM LINK
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    // #################################
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #################################

    map<string,string> slogan;

    int n,q; cin>>n;
    string temp; getline(cin,temp);
    string s1,s2;
    while (n--)
    {  
        getline(cin,s1);
        getline(cin,s2);
        slogan[s1]=s2;
    }
    
    cin>>q; getline(cin,temp);

    while (q--)
    {
        getline(cin,s1);
        s2 = slogan[s1];
        cout<<s2<<endl;
    }
    

}
