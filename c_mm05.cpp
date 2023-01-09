#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
  double number;
  vector<double> vec;
  while(cin>>number && !cin.eof()){
    vec.push_back(number);
  }
  double d ;
  for(auto it:vec) {
    d = it * it;
    cout<<fixed<<setprecision(1)<<d<<endl;
  }
  return 0;
}