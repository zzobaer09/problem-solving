/*
    Pre-Bootcamp Contest
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 

vector<int> compareTriplets(vector<int> a,vector<int> b){
    int ap,bp;
    ap=0;bp=0;
    for (int i = 0; i < 3; i++)
    {
        if(a[i]>b[i]) ap++;
        else if(a[i]==b[i]) ;
        else bp++;
    }
    return vector<int>{ap,bp};
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>a(3),b(3);

    for(int &v:a) cin>>v;
    for(int &v:b) cin>>v;
    for(int v:compareTriplets(a,b)) cout<<v<<" ";
    cout<<endl;
}
