#include <iostream>
using namespace std;

int main() {
  int num;
  while(cin >> num) {
    bool ok = true;
    for(int i = 2; i < num; i++) {
      if(num % i == 0) {
        ok = false;
        break;
      }
    }
    if(ok) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
  return 0;
}