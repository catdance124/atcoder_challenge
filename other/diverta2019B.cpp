// https://atcoder.jp/contests/diverta2019/tasks/diverta2019_b
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int R, G, B, N;
  cin >> R >> G >> B >> N;

  int count = 0;
  for (int i = 0; i < 3001; i++){
    for (int j = 0; j < 3001; j++){
      if ((N - R*i - G*j)>=0 && (N - R*i - G*j) % B == 0){
        count++;
      }
    }
  }

  cout << count << endl;
}