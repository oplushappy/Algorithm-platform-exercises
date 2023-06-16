#include <iostream>
#include <bitset>
using namespace std;

int main() {
  int num;
  while(cin >> num) {
    bitset<8> bitset2(num);
    cout << bitset2 << "\n";
  }
  return 0;
}