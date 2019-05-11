// https://atcoder.jp/contests/abc081/tasks/abc081_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int S123;
  cin >> S123;

  int S1 = S123 / 100;
  int S2 = (S123 - S1*100) / 10;
  int S3 = (S123 - S1 * 100 - S2 * 10);

  cout << S1 + S2 + S3 << endl;
}