/*
    https://vjudge.net/contest/827950#problem/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    set<int> st;
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int temp; cin>>temp;
        st.insert(temp);
    }
    cout<<st.size()<<endl;
    return 0;
}
