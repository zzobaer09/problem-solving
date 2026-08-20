/*
    https://usaco.org/index.php?page=viewproblem2&cpid=572&lang=en
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

int N, Q;
vector<int> cnt1, cnt2, cnt3;

void solve(){
    cin >> N >> Q;

    cnt1.assign(N+1, 0);
    cnt2.assign(N+1, 0);
    cnt3.assign(N+1, 0);

    for(int i = 1; i <= N; i++){
        int breed;
        cin >> breed;
        cnt1[i] = cnt1[i-1] + (breed == 1);
        cnt2[i] = cnt2[i-1] + (breed == 2);
        cnt3[i] = cnt3[i-1] + (breed == 3);
    }

    while(Q--){
        int a, b;
        cin >> a >> b;
        cout << cnt1[b]-cnt1[a-1] << " " << cnt2[b]-cnt2[a-1] << " " << cnt3[b]-cnt3[a-1] << "\n";
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

    solve();

    return 0;
}