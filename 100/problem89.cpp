/*
    Pre-Bootcamp Contest
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
    int n;
    map<int,int> frequency;
    vector<int> list;
    while (cin>>n)
    {
        if(frequency[n]==0) list.push_back(n);
        frequency[n]++;
    }
    

    for(int a:list){
        cout<<a<<" "<<frequency[a]<<endl;
    }
}
