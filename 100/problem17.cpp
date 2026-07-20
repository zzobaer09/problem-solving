/*
    https://vjudge.net/contest/826394#problem/K
*/


#include<bits/stdc++.h>

using namespace std;

vector<int> calculateBird(int x, int y, vector<int>vctr,int n){

    int tmpVal = vctr[x];
    if(n>x+1) vctr[x+1]+=(tmpVal-y);
    if(x-1>=0)vctr[x-1]+=(y-1);
    vctr[x] = 0;
    return vctr;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m=0;cin>>n;
    
    vector<int> vctr;
    int tmp;
    
    for (int i = 0; i < n; i++)
    {
        cin>>tmp;
        vctr.push_back(tmp);
    }
    
    cin>>m;
    
    int x,y;
    for (int i = 0; i < m; i++)
    {
        cin>>x>>y;
        vctr = calculateBird(x-1,y,vctr,n);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<vctr[i]<<endl;
    }
    
}