#include <iostream>
using namespace std;

int main() {
  int row;
  while(cin >> row) {
    for(int i = 0; i < row; i++) {
      char ch;
      int a1, a2, b1, b2;
      cin >> ch >> a1 >> a2 >> b1 >> b2;
      switch (ch)
      {
        case '+': cout << a1 + b1 << " " << a2 + b2 << "\n"; break;
        case '-': cout << a1 - b1 << " " << a2 - b2 << "\n"; break;
        case '*': cout << a1 * b1 - a2 * b2 << " " << a1 * b2 + a2 * b1 << "\n"; break;
        default:break;
      }
    }
  }
  return 0;
}