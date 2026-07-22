/*
    https://codeforces.com/problemset/problem/1005/B
*/


#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin>>s1>>s2;

    long long l1,l2;
    l1 = s1.size()-1;
    l2 = s2.size()-1;
    
    while (true)
    {   
        if(s1[l1]!=s2[l2]){
            l1++;l2++;
            break;
        }
        if(l1==0||l2==0) break;
        l1--;l2--;
    }
    cout<<l1+l2<<endl;
}
