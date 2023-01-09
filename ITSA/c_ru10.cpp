#include <iostream>
using namespace std;

int fn(int num) {
  if(num == 1) return 1;
  else if(num ==2) return 2;
  return fn(num-1) + fn(num-2);
}
int main() {
  int total;
  cin>>total;
  cout<<fn(total)<<endl;
  return 0;
}