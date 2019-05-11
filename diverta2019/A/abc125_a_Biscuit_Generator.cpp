// https://atcoder.jp/contests/abc125/tasks/abc125_a
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int A, B, T;
  cin >> A >> B >> T;
  float timelimit =  T + 0.5;
  int Biscuits = 0;

  for (int i = 1; i < timelimit; i++){
    if (i % A == 0)
      Biscuits += B;
  }
  cout << Biscuits << endl;
}