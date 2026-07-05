/*
    https://vjudge.net/contest/826394#problem/F
*/

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;


int camelcase(string str){
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='A'&&str[i]<='Z') count++;
        
    }
    return count+1;
}

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    
    cout<<camelcase(s)<<endl;
    return 0;
}
