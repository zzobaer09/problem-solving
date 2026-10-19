/*
    Pre-Bootcamp Contest
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,dia1,dia2; cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    
    for(auto &v:matrix){
        for(auto &vv:v){
            cin>>vv;
        }
    }

    dia1=0;dia2=0;
    for(int i=0;i<n;i++){
        dia1+=matrix[i][i];
        dia2+=matrix[i][n-i-1];
    }
    cout<<abs(dia1-dia2)<<endl;
    return 0;
}
