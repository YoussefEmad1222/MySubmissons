#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <iterator>

// using namespace __gnu_pbds;
using namespace std;
// template <typename T>
// using ordered_set =
//     tree<T, null_type, less<T>, rb_tree_tag,
//     tree_order_statistics_node_update>;

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
bool compare(pair<ll, ll> &a, pair<ll, ll> &b) { return a.second < b.second; }
ll twoKnight(ll x) {
  return (x * x * x * x - x * x) / 2 - 4 * (x - 1) * (x - 2);
}
ll numberSpiral(ll x, ll y) {
  ll ans = 0;
  if (x > y) {
    if (x % 2 == 0) {
      ans = x * x - y + 1;
    } else {
      ans = (x - 1) * (x - 1) + y;
    }
  } else {
    if (y % 2 == 0) {
      ans = (y - 1) * (y - 1) + x;
    } else {
      ans = y * y - x + 1;
    }
  }
  return ans;
}
void solve() { // Maximum Sum SubArray II
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cout << twoKnight(i) << endl;
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
