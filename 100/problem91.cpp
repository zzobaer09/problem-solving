/*
    Pre-Bootcamp Contest
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

    int count=0;
    int max_val=0;
    string s; cin>>s;

    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]) count++;
        else count=0;
        max_val = max(count,max_val);
    }
    cout<<max_val+1<<endl;
}
