// https://atcoder.jp/contests/abc076/tasks/abc076_a
#include <bits/stdc++.h>
using namespace std;


int main()
{
  float R, G, P;
  cin >> R >> G;

  // G = (R + P) / 2;
  P = G * 2 - R;
  cout << P << endl;
}