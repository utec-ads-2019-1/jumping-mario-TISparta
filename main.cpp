#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int high = 0, low = 0;
    for (int i = 1; i < n; i++) {
      if (arr[i] > arr[i - 1]) high++;
      if (arr[i] < arr[i - 1]) low++;
    }
    cout << "Case " << t << ": " << high << ' ' << low << '\n';
  }
  return (0);
}
