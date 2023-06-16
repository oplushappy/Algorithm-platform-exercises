#include <iostream>
using namespace std;

int main() {
  char ch;
  while(cin >> ch) {
    cout << static_cast<int>(ch) << "\n";
  }
  return 0;
}