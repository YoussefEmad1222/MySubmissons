#include <algorithm>
#include <bits/extc++.h>
#include <bits/stdc++.h>
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
  ll n, k, sm = 0,maxx=0;
  cin >> n >> k;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sm += a[i];
    maxx = max(maxx, a[i]);
  }
  ll l = maxx, r = sm, minSum = INF;
  while (l <= r) {
    ll mid = (l + r) / 2;
    ll cnt = 1;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
      if (sum + a[i] > mid) {
        cnt++;
        sum = 0;
      }
      sum += a[i];
    }
    if (cnt <= k) {
      minSum = min(minSum, mid);
      r = mid - 1;
    } else
      l = mid + 1;
  }
  cout << minSum << endl;
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
