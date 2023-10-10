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
const ll N = 2e5 + 5, inf = LONG_MAX, mod = 1e9 + 7;

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
  // sum of 3 values
  ll n, x;
  cin >> n >> x;
  vector<pair<ll, ll>> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i].first;
    vec[i].second = i;
  }
  sort(all(vec));
  for (int i = 0; i < n; i++) {
    int l = i + 1, r = n - 1;
    while (l < r) {
      if (vec[i].first + vec[l].first + vec[r].first == x) {
        vector<ll> ans = {vec[i].second + 1, vec[l].second + 1,
                          vec[r].second + 1};
        sort(all(ans));
        for (auto &i : ans) {
          cout << i << " ";
        }
        return;
      } else if (vec[i].first + vec[l].first + vec[r].first > x) {
        r--;
      } else {
        l++;
      }
    }
  }
  cout << "IMPOSSIBLE" << endl;
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
