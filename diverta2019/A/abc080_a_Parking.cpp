// https://atcoder.jp/contests/abc083/tasks/abc083_a
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int N, A, B;
  cin >> N >> A >> B;

  int Plan1 = A * N;
  int low_price;
  if (Plan1 > B)
    low_price = B;
  else
    low_price = Plan1;

  cout << low_price << endl;
}