/*
    https://vjudge.net/contest/826394#problem/D
*/

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arrNum(0);

    int N;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        int temp = 0;
        cin>>temp;
        arrNum.push_back(temp);
    }
    
    sort(arrNum.begin(),arrNum.end());

    for (auto &&i : arrNum)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}
