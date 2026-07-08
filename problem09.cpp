/*
    https://vjudge.net/contest/827950#problem/C
*/

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x; cin>>n>>x;
    
    vector<int> vt;

    for (int i = 0; i < n; i++)
    {
        int temp; cin>>temp;
        vt.push_back(temp);
    }
    

    sort(vt.rbegin(),vt.rend());
    int counter = 0;

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if(vt[i]==-1) continue;
        int temp_sum = vt[i];
        
        for (int j = i+1; j<n && flag; j++)
        {
            if(vt[j]==-1) continue;

            if(temp_sum+vt[j]<=x){
                temp_sum += vt[j];
                vt[j] = -1;
                flag = false;
            }             
        }

        counter++;
        temp_sum = 0;
        vt[i] = -1;
        flag = true;
    }
    cout<<counter<<endl;
    return 0;
}

