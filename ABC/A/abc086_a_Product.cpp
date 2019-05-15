// https://atcoder.jp/contests/abc086/tasks/abc086_a
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int a,b;
  cin >> a >> b;

  int product = a * b;

  if(product %2 ==0)
    cout << "Even" << endl;
  else
    cout << "Odd" << endl;
}