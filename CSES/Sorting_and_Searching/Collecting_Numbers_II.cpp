#include <bits/stdc++.h>
#include <random>

using namespace std;
typedef long long ll;
typedef long double ld;

const ll N = 2e5 + 5, inf = LONG_MAX, mod = 1e9 + 7;

void fast() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}

int main() {
  fast();
  ll t;
  //    cin >> t;
  t = 1;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), pos(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      pos[a[i]] = i;
    }
    ll ans = 1;
    for (int i = 2; i <= n; i++) {
      if (pos[i - 1] > pos[i]) {
        ans++;
      }
    }
    set<pair<int, int>> s;
    while (m--) {
      ll x, y;
      cin >> x >> y;
      if (a[x] + 1 <= n) {
        s.insert({a[x], a[x] + 1});
      }
      if (a[y] + 1 <= n) {
        s.insert({a[y], a[y] + 1});
      }
      if (a[x] - 1 >= 1) {
        s.insert({a[x] - 1, a[x]});
      }
      if (a[y] - 1 >= 1) {
        s.insert({a[y] - 1, a[y]});
      }
      for (auto i : s) {
        if (pos[i.second] < pos[i.first]) {
          ans--;
        }
      }
      swap(a[x], a[y]);
      pos[a[x]] = x;
      pos[a[y]] = y;
      for (auto i : s) {
        if (pos[i.second] < pos[i.first]) {
          ans++;
        }
      }
      cout << ans << "\n";
      s.clear();
    }
  }
  return 0;
}