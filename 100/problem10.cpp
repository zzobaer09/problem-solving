/*
    https://vjudge.net/contest/827950#problem/B
*/

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    vector<int> unique_arr;
    vector<int> frequency_arr;

    int tmp;
    bool flag = true;
    while (cin>>tmp)
    {
        for (int i = 0; i < unique_arr.size(); i++)
        {
            if(unique_arr[i]==tmp){
                frequency_arr[i]++;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            unique_arr.push_back(tmp);
            frequency_arr.push_back(1);
        }
        flag = true;
    }
    
    for (int i = 0; i < unique_arr.size(); i++)
    {
        cout<<unique_arr[i]<<" "<<frequency_arr[i]<<endl;
    }
    

    return 0;
}
