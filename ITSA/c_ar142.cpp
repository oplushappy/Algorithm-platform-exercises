#include <iostream>
using namespace std;
int main() {
  int m,n;
  cin>>m>>n;
  int result = 0;
  for(int i = 1; i <= m; i++) {
    if((i * i) % n == 0) {
      result += (i*i);
    }
  }
  cout<<result<<endl;
  return 0;
}