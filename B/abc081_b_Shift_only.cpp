// https://atcoder.jp/contests/abc081/tasks/abc081_b
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  int flag = 1;
  int count = 0;

  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A.at(i);
    if (A.at(i) % 2 == 1)
      flag = 0;
  }

  while(flag){
    for (int i = 0; i < N; i++){
      A.at(i) /= 2;
      if (A.at(i) % 2 == 1)
        flag = 0;
    }
    count += 1;
  }

  cout << count << endl;
}