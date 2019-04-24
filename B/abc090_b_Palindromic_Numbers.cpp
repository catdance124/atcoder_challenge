// https://atcoder.jp/contests/abc090/tasks/abc090_b
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int A, B;
  cin >> A >> B;

  int num = 0;

  for (int i = A; i <= B; i++){
    int tmp = i, sum = 0;
    int j = 10000;
    
    while (tmp > 0){
      sum += tmp % 10 * j;
      tmp /= 10;
      j /= 10;
    }
    if (sum == i)
      num++;
  }
  cout << num << endl;
}