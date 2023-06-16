#include <iostream>
using namespace std;

int main() {
  int num;
  while(cin >> num) {
    cout << static_cast<char>(num) << "\n";
  }
  return 0;
}