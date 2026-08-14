/*
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=696
*/

#include<bits/stdc++.h>
using namespace std;

int charToDigit(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c=='A'||c=='B'||c=='C') return 2;
    if (c=='D'||c=='E'||c=='F') return 3;
    if (c=='G'||c=='H'||c=='I') return 4;
    if (c=='J'||c=='K'||c=='L') return 5;
    if (c=='M'||c=='N'||c=='O') return 6;
    if (c=='P'||c=='R'||c=='S') return 7;
    if (c=='T'||c=='U'||c=='V') return 8;
    if (c=='W'||c=='X'||c=='Y') return 9;
    return -1; // Q or Z, never occurs
}

void solve() {
    int n;
    cin >> n;

    map<string,int> freq_map;
    vector<string> v;
    v.reserve(n);

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        string digits;
        digits.reserve(7);
        for (char c : s) {
            if (c == '-') continue;
            int d = charToDigit(c);
            if (d != -1) digits.push_back('0' + d);
        }

        string standard = digits.substr(0, 3) + "-" + digits.substr(3);
        v.push_back(standard);
        freq_map[standard]++;
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    bool hasDuplicates = false;
    for (auto &num : v) {
        if (freq_map[num] > 1) {
            cout << num << " " << freq_map[num] << "\n";
            hasDuplicates = true;
        }
    }
    if (!hasDuplicates) cout << "No duplicates.\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        if (i > 0) cout << "\n";   
        solve();
    }
    return 0;
}