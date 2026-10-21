/*
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1756
*/
 
#include<bits/stdc++.h>
#include<cmath>

typedef long long ll;
typedef long double ld;
 
using namespace std;

int main(int argc, char const *argv[]){
    // #################
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #################

    set<string> dictionary;

    string s;
    while (cin>>s)
    {
        for(char &c:s){
            if(isalpha(c)) c = tolower(c);
            else c = ' ';
        }
        stringstream ss(s);
        while (ss>>s)
        {
            dictionary.insert(s);
        }
        
    }
    for(string ss:dictionary) cout<<ss<<endl;
}
