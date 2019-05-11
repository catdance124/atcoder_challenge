// https://atcoder.jp/contests/abc125/tasks/abc125_b
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  vector<int> V(N);
  vector<int> C(N);
  int costs = 0;

  for (int i = 0; i < N; i++)
    cin >> V.at(i);
  for (int i = 0; i < N; i++)
    cin >> C.at(i);
  for (int i = 0; i < N; i++)
    if(V.at(i) - C.at(i) > 0)
      costs += V.at(i) - C.at(i);

  cout << costs << endl;
}