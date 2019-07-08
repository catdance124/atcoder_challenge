// https://atcoder.jp/contests/m-solutions2019/tasks/m_solutions2019_d
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N;
  cin >> N;

  pair<int, int> bucket[N];
  for (int i = 0; i < N; i++){
    bucket[i] = make_pair(0, 0);
  }

  pair<int, int> vp[N-1];
  for (int i = 0; i < N-1; i++){
    int a, b;
    cin >> a >> b;
    vp[i] = make_pair(a, b);
    bucket[a-1].second = a-1;
    bucket[a-1].first++;
    bucket[b-1].second = b-1;
    bucket[b-1].first++;
  }
  sort(bucket, bucket + N, greater<pair<int, int>>());

  pair<int, int> temp[N];
  for (int i = 0; i < N; i++){  // .second <--> index
    int index = bucket[i].second;
    bucket[i].second = i;
    temp[index] = bucket[i];
  }

  int c[N];
  for (int i = 0; i < N; i++){
    cin >> c[i];
  }
  sort(c, c + N, greater<int>());

  long long ans = 0;
  for (int i = 0; i < N-1; i++){
    int a = vp[i].first;
    int b = vp[i].second;
    int ca_index = temp[a-1].second;
    int cb_index = temp[b-1].second;

    ans += min(c[ca_index], c[cb_index]);
  }
  cout << ans << endl;

  for (int i = 0; i < N; i++){
    cout << c[temp[i].second] << ' ';
  }
  cout << endl;
}