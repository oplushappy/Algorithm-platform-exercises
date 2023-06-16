#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int row;
  cin >> row;
  for(int i = 0; i < row; i++) {
    string tmp;
    cin >> tmp;
    reverse(tmp.begin(), tmp.end());
    tmp[tmp.size() - 1] = tolower(tmp[tmp.size() - 1]);
    tmp[0] = toupper(tmp[0]);
    cout << tmp << "\n";
  }
  return 0;
}