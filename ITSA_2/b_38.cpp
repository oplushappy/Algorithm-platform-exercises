#include <iostream>
#include<iomanip>
using namespace std;

int main() {
  int u;
  cin >> u;
  double s = 0, no_s = 0;
  if(0 <= u && u <= 120) {
    s += u * 2.10;
    no_s += u * 2.10;
  } else if(121 <= u && u <= 330) {
    s += ((u-120) * 3.02 + 120 * 2.10);
    no_s += ((u-120) * 2.68 + 120 * 2.10);
  } else if(331 <= u && u <= 500) {
    s += ((u-330) * 4.39 + 210 * 3.02 + 120 * 2.10);
    no_s += ((u-330) * 3.61 + 210 * 2.68 + 120 * 2.10);    
  } else if(501 <= u && u <= 700) {
    s += ((u-500) * 4.97 + 170 * 4.39 + 210 * 3.02 + 120 * 2.10);
    no_s += ((u-500) * 4.01 + 170 * 3.61 + 210 * 2.68 + 120 * 2.10);    
  } else if(u > 700) {
    s += ((u-700) * 5.63 + 200 * 4.97 + 170 * 4.39 + 210 * 3.02 + 120 * 2.10);
    no_s += ((u-700) * 4.5 + 200 * 4.01 + 170 * 3.61 + 210 * 2.68 + 120 * 2.10);    
  }
	cout << "Summer months:" << fixed << setprecision(2) << s << "\n";
	cout << "Non-Summer months:" << fixed << setprecision(2) << no_s << endl;
  return 0;
}