// https://atcoder.jp/contests/abc088/tasks/abc088_b
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  int count = 0;

  for (int i = 0; i <= A; i++){
    for (int j = 0; j <= B; j++){
      for (int k = 0; k <= C; k++){
        if (X == 500*i + 100*j + 50*k)
          count += 1;
      }
    }
  }

  cout << count << endl;
}