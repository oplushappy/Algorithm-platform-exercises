#include <iostream>
using namespace std;

int main() {
  int a,b,c,d,e,f,g,h,i;
  cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
  int result = a * e * i + d * h * c + g * b * f - c * e * g - b * d * i - a * f * h;
  cout<<result<<endl;
  return 0;
}