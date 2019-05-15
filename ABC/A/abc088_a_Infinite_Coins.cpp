// https://atcoder.jp/contests/abc088/tasks/abc088_a
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N,A;
  cin >> N >> A;

  int res = N % 500;
  if (res <= A)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}