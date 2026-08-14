/*
    https://www.spoj.com/problems/RPLE/en/
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        int N, R;
        cin >> N >> R;

        vector<int> a(R), b(R);
        vector<bool> isSpy(N, false);

        // Pass 1: determine who is a spy (anyone who appears as R1)
        for (int i = 0; i < R; i++) {
            cin >> a[i] >> b[i];
            isSpy[a[i]] = true;
        }

        // Pass 2: check if any spy's target is also a spy
        bool spied = false;
        for (int i = 0; i < R; i++) {
            if (isSpy[b[i]]) {
                spied = true;
                break;
            }
        }

        cout << "Scenario #" << tc << ": " << (spied ? "spied" : "spying") << "\n";
    }

    return 0;
}