#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
  int number;
  vector<int> vec;
  while(cin>>number && !cin.eof()){
    vec.push_back(number);
  }
  double d;
  for(auto it:vec) {
    d = it * 1.6;
    // cout<<fixed<<setprecision(1)<<d<<endl;
    printf("%.1lf\n",d);
  }
  return 0;
}