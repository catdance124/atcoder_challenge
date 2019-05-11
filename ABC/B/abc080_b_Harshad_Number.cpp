// https://atcoder.jp/contests/abc080/tasks/abc080_b
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int N;
  cin >> N;

  int tmp, sum = 0;
  tmp = N;
  while (tmp > 0){
    sum += tmp % 10;
    tmp /= 10;
  }

  if (N%sum==0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}