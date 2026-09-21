/*
    https://atcoder.jp/contests/abc418/tasks/abc418_b?lang=en
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;
    
    int x=0;
    vector<double> rates;
    rates.push_back(0.0);
    int len = s.length();

    for(int i=0;i<len;i++){
        if(s[i]!='t') continue;
        x = 1;
        for(int j=0;j<len;j++){
            
            if(s[j]!='t'||j<=i) continue;
            x++;
            int t = j-i+1;
            if(t<3){ rates.push_back(0); continue;}
            double rate = (x-2)*1.0/(t-2);
            rates.push_back(rate);
            
        }
    }
    cout<<fixed<<setprecision(15)<<*max_element(rates.begin(),rates.end())<<endl;
}
