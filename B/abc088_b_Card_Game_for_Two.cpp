// https://atcoder.jp/contests/abc088/tasks/abc088_b
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  vector<int> cards(N);

  int BobsP = 0, AlicesP = 0;

  for (int i = 0; i < N; i++)
    cin >> cards.at(i);

  sort(cards.begin(), cards.end());
  reverse(cards.begin(), cards.end());

  for (int i = 0; i < N; i++){
    if (i % 2 == 0)
      AlicesP += cards.at(i);
    else
      BobsP += cards.at(i);
  }

  cout << AlicesP - BobsP << endl;
}