/* ================================================================
   COMPETITIVE PROGRAMMING TEMPLATE
   ================================================================ */

// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

/* ---------------- type shortcuts ---------------- */
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef vector<bool> vb;

// #define int long long     // avoids overflow bugs; then use `signed main()` below instead of `int main()`

/* ---------------- macros ---------------- */
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORr(i, a, b) for (int i = (a); i >= (b); --i)
#define rep(i, n) FOR(i, 0, n)

#define endl '\n'   // faster than std::endl (no stream flush)

/* ---------------- constants ---------------- */
const int MOD = 1e9 + 7;     // swap for 998244353 if the problem needs it
const ll INF = 1e18;
const int INF_I = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1.0);

/* ---------------- read/print pairs & vectors directly ---------------- */
template<typename T1, typename T2>
istream& operator>>(istream& in, pair<T1, T2>& p) { return in >> p.first >> p.second; }
template<typename T1, typename T2>
ostream& operator<<(ostream& out, const pair<T1, T2>& p) { return out << '(' << p.first << ", " << p.second << ')'; }
template<typename T>
istream& operator>>(istream& in, vector<T>& v) { for (auto &x : v) in >> x; return in; }
template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) { for (auto &x : v) out << x << ' '; return out; }

/* ---------------- debugging: prints locally, vanishes on judge ---------------- */
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << " = " << (x) << endl
#else
    #define debug(x)
#endif

/* ---------------- utility functions ---------------- */
ll power(ll base, ll exp, ll mod = MOD) {
    ll res = 1; base %= mod;
    if (base < 0) base += mod;
    while (exp > 0) {
        if (exp & 1) res = res * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return res;
}
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll modInverse(ll a, ll mod = MOD) { return power(a, mod - 2, mod); }   // mod must be prime

vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; (ll)i * i <= n; i++)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i) isPrime[j] = false;
    return isPrime;
}

int dx[] = {-1, 1, 0, 0};   // 4-directional grid moves (pair with dy)
int dy[] = {0, 0, -1, 1};

// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());  // shuffle(all(v), rng) / avoids anti-hash on unordered_map

// template<typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// // os.find_by_order(k) -> kth smallest (0-indexed) | os.order_of_key(x) -> count of elements < x

// ---- OPTIONAL: paste in only if cin itself becomes the bottleneck (N ~1e6-1e7+) ----
struct FastReader {
    static const int BUF = 1 << 16;
    char buf[BUF];
    int idx = 0, len = 0;
    inline int gc() {
        if (idx == len) { len = fread(buf, 1, BUF, stdin); idx = 0; if (!len) return -1; }
        return buf[idx++];
    }
    inline int nextInt() {
        int c = gc();
        while (c != '-' && (c < '0' || c > '9')) c = gc();
        bool neg = false;
        if (c == '-') { neg = true; c = gc(); }
        int x = 0;
        while (c >= '0' && c <= '9') { x = x * 10 + (c - '0'); c = gc(); }
        return neg ? -x : x;
    }
} in;
// usage: int n = in.nextInt();

/* ---------------- solve one test case ---------------- */
void solve() {
    // e.g. int n; cin >> n; vi a(n); cin >> a;
    // OR if N is massive: int n = in.nextInt();

}

/* ---------------- main ---------------- */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);      // uncomment for local file-based testing
    // freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;              // comment this line out if the problem has only ONE test case
    while (t--) solve();

    return 0;
}