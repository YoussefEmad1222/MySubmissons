#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
#define pb push_back
const char nl = '\n';
#define fast_cin()                                                             \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define oo 2e9 + 7
const int MOD = 1e9 + 7;

void solve() { // missing number from 1 to n
  ll n, count= 0;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 1; i < n; i++)
    if (a[i] < a[i - 1]) {
      count += (a[i - 1] - a[i]);
      a[i] = a[i - 1];
    }
  cout << count << nl;
}

int main() {
  fast_cin();
  int t = 1;
  while (t--)
    solve();

  return 0;
}