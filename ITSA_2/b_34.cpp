#include <iostream>
using namespace std;

int main() {
  int height , gender;
  while(cin >> height >> gender) {
    double weight;
    if(gender == 1) {
      weight = (height - 80) * 0.7;
      printf("%.1lf\n", weight);
    } else if(gender == 2) {
      weight = (height - 70) * 0.6;
      printf("%.1lf\n", weight);
    }
  }
  return 0;
}