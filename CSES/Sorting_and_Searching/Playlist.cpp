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
int largest_subarray(int a[], int n) {
  // Stores index of array elements
  unordered_map<int, int> index;
  int ans = 0;
  for (int i = 0, j = 0; i < n; i++) {

    // Update j based on previous
    // occurrence of a[i]
    j = max(index[a[i]], j);

    // Update ans to store maximum
    // length of subarray
    ans = max(ans, i - j + 1);

    // Store the index of current
    // occurrence of a[i]
    index[a[i]] = i + 1;
  }

  // Return final ans
  return ans;
}
int main() {
  fast();
  int n;
  cin >> n;
  vector<int> arr(n);
  map<int, bool> seen;
  int maxLength = 0;
  int currentLength = 0;
  int start = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr[i] = x;
    if (!seen[x]) {
      seen[x] = true;
      currentLength++;
      maxLength = max(maxLength, currentLength);
    } else {
      while (arr[start] != x) {
        seen[arr[start]] = false;
        start++;
      }
      currentLength = i - start;
      start++;
    }
  }
  cout << maxLength;
  return 0;
}
