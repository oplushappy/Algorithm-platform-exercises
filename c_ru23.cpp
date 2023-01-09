#include <iostream>
#include <iomanip>
using namespace std;
float fn(float num) {
  if(int(num) == 1) {
    return 1;
  }
  return fn(num-1)/2 + 1;
}
int main() {
  int num;
  cin>>num;
  cout<<fixed<<setprecision(5)<<fn(num)<<endl;
  return 0;
}