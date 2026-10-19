/*
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=427
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    unordered_map<string, ll> val = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9},
        {"ten", 10}, {"eleven", 11}, {"twelve", 12}, {"thirteen", 13},
        {"fourteen", 14}, {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17},
        {"eighteen", 18}, {"nineteen", 19}, {"twenty", 20}, {"thirty", 30},
        {"forty", 40}, {"fifty", 50}, {"sixty", 60}, {"seventy", 70},
        {"eighty", 80}, {"ninety", 90}
    };

    string line;

    while(getline(cin,line))
    {
        if(line.empty()) continue;
        stringstream ss(line);

        ll total=0;
        ll current=0;
        ll sign = 1;
        string s;

        while (ss>>s)
        {
            if(s=="negative") sign=-1;
            else if(s=="hundred") current=current*100;
            else if(s=="thousand") {current=current*1000;total+=current;current=0;}
            else if(s=="million") {current=current*1000000;total+=current;current=0;}
            else current += val[s];
        }
        total+=current;
        total=total*sign;
        cout<<total<<'\n';
    }
    return 0;
}
