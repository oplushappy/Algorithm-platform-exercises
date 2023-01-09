#include<iostream>
#include<cmath>
using namespace std;
int fn(int num) {
  if(num == 0 || num == 1) {
    return num+1;
  }
  return fn(num-1) + fn(floor(num / 2));
}
int main() {
  int num;
  cin>>num;
  cout<<fn(num)<<endl;
  return 0;
}