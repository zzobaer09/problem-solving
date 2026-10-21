/*
    https://www.hackerrank.com/challenges/kangaroo/problem
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
void kangaroo(vector<int> arr){
    int x1,x2,v1,v2;
    x1 = arr[0]; v1 = arr[1]; x2 = arr[2]; v2 = arr[3];

    int diff_x = x2-x1;
    int diff_v = v1-v2;


    if(diff_v>0&&diff_x%diff_v==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr(4); for(int &a:arr) cin>>a;

    kangaroo(arr);
}
