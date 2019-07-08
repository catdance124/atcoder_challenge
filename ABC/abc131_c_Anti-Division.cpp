// https://atcoder.jp/contests/abc131/tasks/abc131_c
#include <bits/stdc++.h>
using namespace std;

long long get_gcd(long long a, long long b){
  if (b>a)
    swap(a, b);
  if (b == 0)
      return a;
  return get_gcd(b, a % b);
}

long long get_lcm(long long a, long long b){
  return a * b / get_gcd(a, b);
}


int main(void){
  long long A, B, C, D;
  cin >> A >> B >> C >> D;
  long long C_n = B / C - (A-1) / C;
  long long D_n = B / D - (A-1) / D;
  long long lcm = get_lcm(C, D);
  long long lcm_n = B / lcm - (A-1) / lcm;

  cout << B - (A-1) - (C_n + D_n - lcm_n) << endl;
}