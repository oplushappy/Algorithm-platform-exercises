#include <iostream>
using namespace std;

int main() {
  int h1, h2, m1, m2;
  cin >> h1 >> m1 >> h2 >> m2;
  int time = ( 60 * h2 + m2 ) - (60 * h1 + m1);
  if(time < 30) {
    cout << "Free" <<"\n";
  } else if(time >= 30 && time <= 120) {
    int money = (time / 30) * 30;
    cout << money <<"\n";
  } else if(time > 120 && time <= 240) {
    int money = (time - 120) / 30 * 40 + 120;
    cout << money <<"\n";
  } else {
    int money = (time - 240) / 30 * 60 + 280;
    cout << money <<"\n";
  }
  return 0;
}