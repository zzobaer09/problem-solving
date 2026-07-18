/*
    https://vjudge.net/contest/826394#problem/E
*/

#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;


int main(int argc, char const *argv[])
{
    deque<int> deque_;
    int t;
    int n,k;

    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            if (deque_.size()==k)
            {
                cout<<*max(deque_.begin(),deque_.end())<<" ";
                deque_.pop_front();
            }
            int temp;
            cin>>temp;
            deque_.push_back(temp);
        }
        cout<<endl;
    }
    
    return 0;
}
