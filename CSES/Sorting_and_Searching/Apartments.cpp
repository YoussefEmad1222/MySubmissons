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
  ll n, m, k;

  cin >> n >> m >> k;
  vll a(n), b(m);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (ll i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(all(a));
  sort(all(b));
  int i = 0, j = 0, count = 0;
  // 45 60 60 80
  // 30 60 75
  while (i < n && j < m) {
    if (abs(a[i] - b[j]) <= k) {
      count++;
      i++;
      j++;
    } else {
      if (a[i] - b[j] > k) {
        j++;
      } else {
        i++;
      }
    }
  }
  cout << count;
}

int main() {
  fast_cin();
  int t = 1;
  while (t--)
    solve();

  return 0;
}