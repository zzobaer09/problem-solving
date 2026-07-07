/*
    https://vjudge.net/contest/826394#problem/E
*/

#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    deque<int> deque_;
    int t;
    int n,k;

    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>n>>k;
        for (int i = 0; i <= n; i++)
        {
            if (deque_.size()==k)
            {
                cout<<*max_element(deque_.begin(),deque_.end())<<" ";
                deque_.pop_front();
            }
            if(i==n) {deque_.clear();break;}
            int temp;
            cin>>temp;
            deque_.push_back(temp);
        }
        cout<<endl;
    }
    
    return 0;
}
