#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;
  float max = INT32_MIN;
  float min = INT32_MAX;
  int total;
  cin>>total;
  for(int i = 0; i < total; i++){
    cin>>n;
    if(n > max) max = n;
    if(n < min) min = n;
  }
  cout<<fixed<<setprecision(2)<<max<<"\n"<<min<<endl;
  return 0;
}