#include <iostream>
using namespace std;

int main() {
  int mile;
  double km;
  while(cin >> mile) {
    km = mile * 1.6;
    printf("%.1lf\n", km);
  }
  return 0;
}