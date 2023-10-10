#include <algorithm>
#include <bits/extc++.h>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <iterator>

using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef vector<ll> vll;
#define endl "\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define mp make_pair
#define x first
#define y second
const ll N = 2e5 + 5, INF = LONG_MAX, mod = 1e9 + 7;

void fast() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}
string fromDecimalToBase(ll n, ll b) {
  string ans = "";
  while (n > 0) {
    ans += to_string(n % b);
    n /= b;
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

// int largest_subarray(int a[], int n) {
//   // Stores index of array elements
//   unordered_map<int, int> index;
//   int ans = 0;
//   for (int i = 0, j = 0; i < n; i++) {

//     // Update j based on previous
//     // occurrence of a[i]
//     j = max(index[a[i]], j);

//     // Update ans to store maximum
//     // length of subarray
//     ans = max(ans, i - j + 1);

//     // Store the index of current
//     // occurrence of a[i]
//     index[a[i]] = i + 1;
//   }

//   // Return final ans
//   return ans;
// }
// recursive DFS
// void dfs(int node, int parent, vector<vector<int>> &graph, vector<ll> &cnt) {
//   bool flag = true;
//   for (auto &child : graph[node]) {
//     if (child != parent) {
//       dfs(child, node, graph, cnt);
//       cnt[node] += cnt[child];
//       flag = false;
//     }
//   }
//   if (flag) {
//     cnt[node] = 1;
//   }
// }
void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  set<pair<ll, ll>> s1, s2;
  if (k == 1) {
    for (ll i = 0; i < n; i++) {
      cout << 0 << " ";
    }
    return;
  }
  if (k == 2) {
    for (ll i = 1; i < n; i++) {
      cout << abs(a[i] - a[i - 1]) << " ";
    }
    return;
  }
  vector<pair<ll, ll>> v;
  for (ll i = 0; i < k; i++) {
    v.pb({a[i], i});
  }
  sort(all(v));
  ll leftSum = 0, rightSum = 0;
  for (ll i = 0; i < k / 2 + (k % 2); i++) {
    s1.insert(v[i]);
    leftSum += v[i].first;
  }
  for (ll i = k / 2 + k % 2; i < k; i++) {
    s2.insert(v[i]);
    rightSum += v[i].first;
  }
  ll median = s1.rbegin()->first;
  cout << median * s1.size() - leftSum + rightSum - median * s2.size() << " ";

  for (ll i = 1; i < n - k + 1; i++) {
    if (s1.count({a[i - 1], i - 1})) {
      leftSum -= a[i - 1];
      s1.erase({a[i - 1], i - 1});
    } else {
      rightSum -= a[i - 1];
      s2.erase({a[i - 1], i - 1});
    }

    if (*(s1.rbegin()) < make_pair(a[i + k - 1], i + k - 1)) {
      rightSum += a[i + k - 1];
      s2.insert(make_pair(a[i + k - 1], i + k - 1));
    } else {
      leftSum += a[i + k - 1];
      s1.insert(make_pair(a[i + k - 1], i + k - 1));
    }

    while (s1.size() < k / 2 + k % 2) {
      pair<ll, ll> p = *(s2.begin());
      s2.erase(p);
      s1.insert(p);
      leftSum += p.first;
      rightSum -= p.first;
    }
    while (s1.size() > k / 2 + k % 2) {
      pair<ll, ll> p = *(s1.rbegin());
      s1.erase(p);
      s2.insert(p);
      leftSum -= p.first;
      rightSum += p.first;
    }
    median = s1.rbegin()->first;
    cout << median * s1.size() - leftSum + rightSum - median * s2.size() << " ";
  }
}

int main() {
  fast();
  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }
  return 0;
}
