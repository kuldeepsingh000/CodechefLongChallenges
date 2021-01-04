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
            res = (res % mod * x % mod) % mod;
        }
        y >>= 1;
        x = (x * x) % mod;
    }

    return res;
}

int sum(int x){
    int ans = 0;
    while(x != 0){
        ans += x%10;
        x/=10;
    }
    return ans;
}

void test_cases()
{
    ll n, k, d;
    cin >> n >> k >> d;
    int arr[n];
    int sum = 0;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        sum += a;
    }

    int x = sum/k;
    if(x >= d){
        cout << d << "\n";
    }else{
        cout << x << "\n";
    }
}

int main()
{
    fastio();
    ll x = 0;
    // int test = 1;
    ll test;
    cin >> test;
    while (test-- > 0)
    {
        //cout << "Case #" << ++x << ": ";
        test_cases();
    }
    //cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    return 0;
}
