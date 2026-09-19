/*
    https://cses.fi/problemset/task/1069
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin>>s;
    int max = 1;
    int count = 1;
    for (size_t i = 0; i < s.length()-1; i++)
    {
        if(s[i]==s[i+1]) count++;
        else count = 1;
        if (count>max){
            max = count;
        } 
    }
    cout<<max<<endl;
}
