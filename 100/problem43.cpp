/*
    https://www.spoj.com/problems/TRIGALGE/en/
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

double f(double x, ll A, ll B){
    return A*x + B*sin(x);
}

double solve(ll A, ll B, ll C){
    double lo = (double)(C - B) / A;
    double hi = (double)(C + B) / A;
    for(int iter = 0; iter < 100; iter++){
        double mid = (lo + hi) / 2;
        if(f(mid, A, B) < (double)C) lo = mid;
        else hi = mid;
    }
    return (lo + hi) / 2;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    cout << fixed << setprecision(6);
    while(T--){
        ll A, B, C;
        cin >> A >> B >> C;
        double ans = solve(A, B, C);
        if(fabs(ans) < 1e-9) ans = 0;
        cout << ans << "\n";
    }
}