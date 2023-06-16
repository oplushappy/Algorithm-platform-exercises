#include <iostream>
using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b)
  {
    if(a < b) swap(a , b);
    while(b != 0) {
      int r = a % b;
      a = b;
      b = r;
    }
    cout << a << "\n";
  }
  
  return 0;
}