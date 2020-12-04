#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define fastio()  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pp pop_back
#define F first
#define S second
#define all(x) x.begin(), x.end()

const ll MOD = 1000000007;
ll mod(ll n, ll m = MOD)
{
    n %= m, n += m, n %= m;
    return n;
}

const int MAXN = 1e9 + 5;
const ll INF = 1e14;

int arr[1<<20];
void test_cases()
{
    ll a, b;
    cin >> a >> b;

    ll e1 = a / 2;
    ll o1 = a - e1;
    ll e2 = b / 2;
    ll o2 = b - e2;
    e1 *= e2;
    o1 *= o2;
    cout << e1+o1 << endl;
}

int main()
{
    fastio();
    // int x = 0;
    // int t = 1;
    int t;
    cin >> t;
    while (t-- > 0)
    {
        //cout << "Case #" << ++x << ": ";
        test_cases();
    }
    //cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    return 0;
}
