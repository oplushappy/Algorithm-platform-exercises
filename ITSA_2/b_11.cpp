#include <iostream>
#include <vector>
using namespace std;

int main() {
  int row, column;
  while(cin >> row >> column) {
    vector<vector<int>> v(row, vector<int>(column));
    for(auto &r : v) {
      for(auto &c : r) {
        cin >> c;
      }
    }
    for(int i = 0; i < column; i++) {
      for(int j = 0; j < row; j++) {
        cout << v[j][i];
        if(j != row - 1) {
          cout << " ";
        }
      }
      cout << "\n";
    }
  }
  return 0;
}
  
