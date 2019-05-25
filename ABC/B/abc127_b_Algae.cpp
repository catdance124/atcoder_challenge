// https://atcoder.jp/contests/abc127/tasks/abc127_b
#include <bits/stdc++.h>
using namespace std;

int main(void){
  long long r, x, D;
  cin >> r >> D >> x;

  for (int i = 1; i <= 10; i++){
    x = r * x - D;
    cout << x << endl;
  }
}