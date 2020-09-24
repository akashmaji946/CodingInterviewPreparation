#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int compare(int x, int y) {
  if (x == y)
    return 0;
  else if (x > y)
    return 1;
  else
    return -1;
}

int maxTurbulenceSize(int A[], int N) {

  int ans = 1;
  int anchor = 0;

  for (int i = 1; i < N; ++i) {
    int c = compare(A[i - 1], A[i]);
    if (c == 0) {
      anchor = i;
    }
    else if (i == N - 1 || c * compare(A[i], A[i + 1]) != -1) {
      max(ans, i - anchor + 1);
      anchor = i;
    }
  }

  return ans;

}

int main() {
  int n;
  cin >> n;
  int A[n];
  for (int i = 0 ; i < n; i++) {
    cin >> A[i];
  }

  cout << maxTurbulenceSize(A, n) << endl;

  return 0;
}