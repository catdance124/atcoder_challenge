// https://atcoder.jp/contests/diverta2019/tasks/diverta2019_c
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N;
  cin >> N;
  string s[N];
  for (int i = 0; i < N; i++)  cin >> s[i];

  queue<int> endA;
  queue<int> firstB;
  int count = 0;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < s[i].size()-1; j++){
      if (s[i].substr(j,2) == "AB")
        count++;
    }
    if (s[i][0] == 'B')
      firstB.push(i);
    if (s[i][s[i].size()-1] == 'A')
      endA.push(i);
  }

  int out = 0;
  vector<int> temp(N, -1);
  while(endA.size() > 0 && firstB.size() > 0){
    int A = endA.front();
    int B = firstB.front();
    firstB.pop();
    if (A != B){
      if (temp[A] != B){
        endA.pop();
        temp[B] = A;
        count++;
      }else{
        endA.pop();
        endA.push(A);
        firstB.push(B);
      }
    }else{
      firstB.push(B);
    }
  }

  cout << count << endl;
}