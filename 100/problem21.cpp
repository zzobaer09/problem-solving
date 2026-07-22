/*
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=423
*/


#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    //fast input
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    cin.ignore();

    vector<int> v_idx;
    vector<string> v_arr;

    while (t--)
    {
        int idx;
        string val;
    
        string l1,l2;
    
        while (getline(cin,l1)&&l1==""){}
        getline(cin,l2);
    
        stringstream ss1(l1);
        stringstream ss2(l2);
    
        while (ss1>>idx)    v_idx.push_back(idx-1);
        while (ss2>>val)    v_arr.push_back(val);
    
    
    
        const int len = v_idx.size();
    
        string arr[len];
        
        for (int i = 0; i < len; i++)
        {
            arr[v_idx[i]] = v_arr[i];
        }
        
        
        for (int i = 0; i < len; i++)
        {
            cout<<arr[i]<<endl;
        }
        if(t>0)cout<<endl;
        v_idx.clear();
        v_arr.clear();
    }
    
}