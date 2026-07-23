/*
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=82
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    //fast input
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    while (getline(cin,s)&&s!="#")
    {
        if (!next_permutation(s.begin(),s.end()))
        {
            cout<<"No Successor"<<endl;
        }else cout<<s<<endl;
        
    }
        
}