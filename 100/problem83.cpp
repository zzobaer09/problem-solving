/*
    https://codeforces.com/problemset/problem/125/B
*/

#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        int h = 0;
        int n = s.length();

        for (int i = 0; i < n; ) {
            if (s[i] == '<') {
                int j = s.find('>', i);
                string tag = s.substr(i, j - i + 1);

                if (tag[1] == '/') {
                    h--;
                    cout << string(2 * h, ' ') << tag << "\n";
                } else {
                    cout << string(2 * h, ' ') << tag << "\n";
                    h++;
                }

                i = j + 1;
            } else {
                i++;
            }
        }
    }

    return 0;
}