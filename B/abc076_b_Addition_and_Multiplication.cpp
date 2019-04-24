// https://atcoder.jp/contests/abc076/tasks/abc076_b
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int N, K;
  cin >> N >> K;
  int num = 1;

  for (int i = 0; i < N; i++){
    if (num < K){
      num += num;
    }else{
      num += K;
    }
  }

  cout << num << endl;
}