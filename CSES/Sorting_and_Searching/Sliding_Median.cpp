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
  for (ll i = 0; i < n; i++)
    cin >> a[i];
  ordered_set<pair<ll, ll>> s;
  for (ll i = 0; i < k; i++) {
    s.insert({a[i], i});
  }
  cout << s.find_by_order((k-1)/2)->first <<" ";
  for (ll i = 1; i < n-k+1; i++) {
    s.erase({a[i-1], i-1});
    s.insert({a[i+k-1], i+k-1});
    cout << s.find_by_order((k-1)/2)->first << " ";
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
