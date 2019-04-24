// https://atcoder.jp/contests/abc074/tasks/abc074_b
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int N, K;
  cin >> N >> K;

  int sum = 0;
  for (int i = 0; i < N; i++){
    int x;
    cin >> x;
    
    if (x < K/2.0)
      sum += x * 2;
    else{
      if (x < K)
        sum += (K - x) * 2;
      else
        sum += (x - K) * 2;
    }
  }

  cout << sum << endl;
}