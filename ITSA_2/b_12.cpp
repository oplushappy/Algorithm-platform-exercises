#include<iostream>
using namespace std;

int f(int k) {
  if(k == 0 || k == 1) {
    return k + 1;
  } else {
    return f(k - 1) + f(k / 2);
  }
}

int main() { 
  int num;
  while(cin >> num) {
    cout << f(num) << "\n";
  }
  return 0;
}