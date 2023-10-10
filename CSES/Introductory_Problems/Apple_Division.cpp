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
void fizzBuzz(int n) {
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      cout << "FizzBuzz" << endl;
    } else if (i % 3 == 0) {
      cout << "Fizz" << endl;
    } else if (i % 5 == 0) {
      cout << "Buzz" << endl;
    } else {
      cout << i << endl;
    }
  }
}
bool compare(pair<ll, ll> &a, pair<ll, ll> &b) { return a.second < b.second; }
ll numberOfTrialZeros(ll n) {
  ll ans = 0;
  for (ll i = 5; n / i >= 1; i *= 5) {
    ans += n / i;
  }
  return ans;
}
string palindromeReOrder(string s) {
  vector<int> res(26, 0);
  for (char c : s) {
    res[(int)(c - 'A')]++;
  }
  int noOfOdds = 0;
  char theOddChar = ' ';
  for (int i = 0; i < 26; i++) {
    if (res[i] % 2 == 1) {
      theOddChar = (char)('A' + i);
      noOfOdds++;
      if (noOfOdds > 1) {
        return "NO SOLUTION";
      }
    }
  }
  string ans = "";
  if (theOddChar != ' ') {
    ans.push_back(theOddChar);
    int index = theOddChar - 'A';
    res[index]--;
  }
  for (int i = 0; i < 26; i++) {
    if (res[i] > 0 && res[i] % 2 == 0) {
      char c = (char)('A' + i);
      int count = res[i] / 2;
      ans.insert(0, count, c);
      ans.append(count, c);
    }
  }

  return ans;
}
ll bitstring(ll a) {
  ll ans = 2;
  while (a > 1) {
    ans = (ans * 2) % mod;
    a -= 1;
  }
  return ans;
}
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
long getMaximumPower(vector<int> power) {

  vector<long long int> dp(1e5 + 2, 0);
  vector<long long int> ans(1e5 + 2, 0);
  int mx = 0;
  for (int i = 0; i < power.size(); i++) {
    ans[power[i]]++;
    mx = max(mx, power[i]);
  }
  long long int maxAns = 0;
  for (int i = 1; i <= mx; i++) {
    dp[i] = max(i - 2 >= 0 ? dp[i - 2] : 0, i - 3 >= 0 ? dp[i - 3] : 0) +
            ans[i] * i;
    maxAns = max(maxAns, dp[i]);
  }

  return maxAns;
}
vector<string> hammingCode(int n) {
  vector<string> actual;
  if (n == 1) {
    actual.push_back("0");
    actual.push_back("1");
    return actual;
  } else {
    vector<string> prev = hammingCode(n - 1);
    for (int i = 0; i < prev.size(); i++) {
      actual.push_back("0" + prev[i]);
    }
    for (int i = prev.size() - 1; i >= 0; i--) {
      actual.push_back("1" + prev[i]);
    }
  }
  return actual;
}
void solve() { // Maximum Sum SubArray II
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll minDiff = INF;
  for (int i = 1; i < (1 << n); i++) {
    ll sum1 = 0, sum2 = 0;
    for (int j = 0; j < n; j++) {
      if ((i >> j) & 1) {
        sum1 += a[j];
      } else {
        sum2 += a[j];
      }
    }
    minDiff = min(minDiff, abs(sum1 - sum2));
  }
  cout << minDiff << endl;
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
