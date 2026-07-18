/* 
    problem: https://vjudge.net/contest/826394#problem/A
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,q;
    cin>>n>>q;
    int queries[q][3];
    for(int i=0;i<q;i++){
        cin>>queries[i][0]>>queries[i][1]>>queries[i][2];
    }

    vector<vector<int>> arr(n,vector<int>(0));
    int lastAnswer = 0;
    int idx = 0;
    for (int i = 0; i < q; i++)
    {
        int qtype =queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];
        if (qtype==1)
        {
            idx = (x^lastAnswer)%n;
            arr[idx].push_back(y);

        }else if(queries[i][0]==2)
        {
            idx = (x^lastAnswer)%n;
            lastAnswer = arr[idx][y%arr[idx].size()];
            cout<<lastAnswer<<endl;
        }     
    }
    
    return 0;
}
