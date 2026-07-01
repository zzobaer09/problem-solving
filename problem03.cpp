/*
    https://vjudge.net/contest/826394#problem/C
*/

#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    stringstream ss(s);

    long a,b,c;
    char ch;
    vector<int> arr;    
    while (!ss.eof())
    {
        int temp;
        ss>>temp>>ch;
        arr.push_back(temp);
    }
    for (auto &&i : arr) cout<<i<<endl;    
    return 0;
}
