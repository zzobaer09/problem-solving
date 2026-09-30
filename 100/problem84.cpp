/*
    https://lightoj.com/problem/double-ended-queue
*/
 
#include<bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        for (int tc = 1; tc <= t; tc++) {
            cout << "Case " << tc << ":\n";
            int n, m;
            cin >> n >> m;
            deque<int> dq;
            while (m--) {
                string cmd;
                cin >> cmd;
                if (cmd == "pushLeft") {
                    int x;
                    cin >> x;
                    if ((int)dq.size() == n) {
                        cout << "The queue is full\n";
                    } else {
                        dq.push_front(x);
                        cout << "Pushed in left: " << x << "\n";
                    }
                } else if (cmd == "pushRight") {
                    int x;
                    cin >> x;
                    if ((int)dq.size() == n) {
                        cout << "The queue is full\n";
                    } else {
                        dq.push_back(x);
                        cout << "Pushed in right: " << x << "\n";
                    }
                } else if (cmd == "popLeft") {
                    if (dq.empty()) {
                        cout << "The queue is empty\n";
                    } else {
                        int val = dq.front();
                        dq.pop_front();
                        cout << "Popped from left: " << val << "\n";
                    }
                } else if (cmd == "popRight") {
                    if (dq.empty()) {
                        cout << "The queue is empty\n";
                    } else {
                        int val = dq.back();
                        dq.pop_back();
                        cout << "Popped from right: " << val << "\n";
                    }
                }
            }
        }
    }

    return 0;
}