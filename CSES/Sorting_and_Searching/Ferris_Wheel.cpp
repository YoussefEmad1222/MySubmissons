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
  ll n, x;
  cin >> n >> x;
  vll a(n);
   for (ll i = 0; i < n; i++) { cin >> a[i]; }
  sort(all(a));
  ll ans = 0;
  int i = 0, j = n - 1;
  while (i <= j) {
     if(i == j) { ans++; break; }
    if (a[i] + a[j] <= x) {
      i++;
      j--;
      ans++;
    } else {
      j--;
      ans++;
    }
  }
  cout << ans << nl;
}

int main() {
  fast_cin();
  int t = 1;
  while (t--)
    solve();

  return 0;
}