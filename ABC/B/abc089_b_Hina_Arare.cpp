// https://atcoder.jp/contests/abc089/tasks/abc089_b
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  string judge="Three";

  for (int i = 0; i < N;i++){
    string color;
    cin >> color;
    if (color=="Y")
      judge = "Four";
  }

  cout << judge << endl;
}