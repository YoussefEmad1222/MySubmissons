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

void solve() {
  ll n;
  cin >> n;
  cout << n << " ";
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = n * 3 + 1;
    }
    cout << n << " ";
  }
}

int main() {
  fast_cin();
  int t = 1;
  while (t--)
    solve();

  return 0;
}