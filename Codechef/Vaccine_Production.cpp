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
    ll a,b,c,d, sum;
    cin >> a >> b >> c >> d >> sum;
    int j = 0;
    int total = 0;
    for(j = 1; j<MAXN; j++){
        if(a<=j){
            total += b;
        }
        if(c <= j){
            total += d;
        }
        if(total >= sum){
            break;
        }
    }
    cout << j << endl;
}

int main()
{
    fastio();
    int x = 0;
    int t = 1;
    // int t;
    // cin >> t;
    while (t-- > 0)
    {
        //cout << "Case #" << ++x << ": ";
        test_cases();
    }
    //cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    return 0;
}
