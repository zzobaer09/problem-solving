/*
    https://lightoj.com/problem/ghajini
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

ll getMaxDiff(deque<ll> dq){

    return *max_element(dq.begin(),dq.end())-*min_element(dq.begin(),dq.end());
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;

    int  T = t;
    while (t--)
    {
        ll n,d; cin>>n>>d;
        deque<ll> dq;

        ll maxVal = LONG_LONG_MIN;



        for (int i = 0; i<n;i++)
        {
            ll tmp; cin>>tmp;
            dq.push_back(tmp);


            if(dq.size()==d){
                maxVal = max(maxVal,getMaxDiff(dq));
                dq.pop_front();
            }
        }
        cout<<"Case "<<T-t<<": "<<maxVal<<endl;
    }
    
}