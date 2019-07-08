// https://atcoder.jp/contests/abc062/tasks/abc062_b
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int H, W;
  cin >> H >> W;

  vector<string> row(H);
  vector<char> sharp(W + 2, '#');
  
  for (int i = 0; i < H; i++)
    cin >> row.at(i);

  for (int i = 0; i < sharp.size(); i++)
    cout << sharp.at(i);
  cout << endl;
  
  for (int i = 0; i < row.size(); i++){
    cout << '#';
    for (int j = 0; j < row.at(i).size(); j++)
      cout << row.at(i).at(j);
    cout << '#' << endl;
  }

  for (int i = 0; i < sharp.size(); i++)
    cout << sharp.at(i);
  cout << endl;
}