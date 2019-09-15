// https://atcoder.jp/contests/abc141/tasks/abc141_d
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, M;
  cin >> N >> M;
  vector<int> prices(N);
  for (int i = 0; i < N; i++){
    cin >> prices[i];
  }
  for (int i = 0; i < M; i++){
    vector<int>::iterator maxIt = max_element(prices.begin(), prices.end());
    size_t maxIndex = distance(prices.begin(), maxIt);
    prices[maxIndex] /= 2;
  }

  cout << accumulate(prices.begin(), prices.end(), 0LL) << endl;
}