#include <iostream>
#include <cmath>
using namespace std;

int main() {
  const double area = 3.14 * 100 * 100;
  int x, y;
  double new_area;
  while(cin >> x) {
    cin >> y;
    double dis = sqrt(x*x + y*y);
    new_area = 3.14 * pow(dis, 2);
    if(new_area > area) {
      cout << "outside" << "\n";
    } else {
      cout << "inside" << "\n";
    }
  }
  return 0;
}