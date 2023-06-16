#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double r;
  long int n, p;
  cin >> r >> n >> p;
  double total = 0;
  for(int i = 0; i < n; i++) {
    total += p;
    total += total * r;
  }
  cout << (long)total << "\n";
  return 0;
}