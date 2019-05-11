// https://atcoder.jp/contests/abc079/tasks/abc079_a
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int N;
  cin >> N;

  int S1 = N / 1000;
  int S2 = (N - S1 * 1000) / 100;
  int S3 = (N - S1 * 1000 - S2 * 100) / 10;
  int S4 = (N - S1 * 1000 - S2 * 100 - S3 * 10);

  if (S1 == S2 && S2 == S3 || S2 == S3 && S3 == S4)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}