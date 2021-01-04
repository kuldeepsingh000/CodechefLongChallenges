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
const int MAXN = 1e9 + 5;
const ll INF = 1e14;
const ll mod = 1000000007;

/*Fast Power*/
ll power(ll x, ll y){
    ll res = 1;
    x = x % mod;
    while(y != 0){
        if(y&1){
            res = (res%mod * x%mod)%mod;
        }
        y >>= 1;
        x = (x * x)%mod;
    }

    return res;
}

int arr[1<<20]; // global array

void test_cases()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    int xx = 0;
    for(char e : x){
        if(e == '0') xx++;
    }
    int tt = 120-xx;
    float r = (float)(tt * 1.0) / (120);
    r *= 100;
    if(r >= 75){
        cout << "YES";
    }else{
        cout << "NO";
    }
    cout << endl;
}

int main()
{
    fastio();
    int x = 0;
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
