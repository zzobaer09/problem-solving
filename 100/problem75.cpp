/*
    https://www.hackerrank.com/contests/game-of-codes-at-snist/challenges/2d-array/problem
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 

int sum_row(vector<vector<int>>a, int i, int j){
    return a[i][j]+a[i][j+1]+a[i][j+2];
}

int hourglassSum(vector<vector<int>>a, int i, int j){
    return sum_row(a,i,j)+sum_row(a,i+2,j)+a[i+1][j+1];
}
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    vector<vector<int>> a(6,vector<int>(6));
    vector<int> allSum;
    for(auto &i:a) for(auto &j:i) cin>>j;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            allSum.push_back(hourglassSum(a,i,j));
        }
    }
    cout<<*max_element(allSum.begin(),allSum.end())<<endl;
}
