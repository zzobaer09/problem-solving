/*
    https://vjudge.net/contest/826394#problem/B
*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string a,b;
    cin>>a>>b;
    
    int lena = a.length();
    int lenb = b.length();

    cout<<lena<<" "<<lenb<<endl;
    cout<<a<<b<<endl;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b<<endl;
    return 0;
}
