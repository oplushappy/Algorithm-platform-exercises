#include <iostream>
#include <iomanip>
using namespace std;

int g(int n);

int fn(int n) {
  if(n == 1) {
    return 2;
  }
  return 3 * fn(n-1) + g(n-1);
}
int g(int n) {
  if(n == 1) {
    return (-6);
  }
  return -fn(n-1) + g(n-1);
}

int main() {
  int num;
  cin>>num;
  cout<<fn(num)<<" "<<g(num)<<endl;
  return 0;
}