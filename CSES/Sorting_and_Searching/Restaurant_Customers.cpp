#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;

const int N = 1e5 + 7;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef set<ll> sll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef map<char, ll> mcl;
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define all(x) (x).begin(), (x).end()
#define oo 2e9 + 7
const char nl = '\n';
#define fast_cin()                                                             \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)

void solve() { // missing number from 1 to n
  ll n;
  cin >> n;
  vector<pair<ll, ll>> a;
  for (ll i = 0; i < n; i++) {
    int x,y;
    cin >> x >> y;
    a.pb(mp(x,1));
    a.pb(mp(y,-1));
  }
  sort(all(a));
  ll cur = 0, max = 0;
  for (auto i : a) {
    cur += i.y;
    max=max>cur?max:cur;
  }
  cout<<max<<nl;
}

int main() {
  fast_cin();
  int t = 1;
  while (t--)
    solve();

  return 0;
}