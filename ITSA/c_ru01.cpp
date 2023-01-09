#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// long long cl(long long num) {
//   if(num == 1) return 1;
//   return num * cl(num-1);
// }
int main() {
  int total;
  cin>>total;
  unsigned long long array[total];
  int temp;
  
  // for(int i = 0; i < total; i++) {
  //   cin>>temp;
  //   array[i] = cl(temp);
  // }
  for(int i = 0; i < total; i++) {
    cin>>temp;
    unsigned long long result = 1;
    for(int  j = 1; j <= temp; j++) {
      result*=j;
    }
    array[i] = result;
  }
  for(int i = 0; i < total; i++) {
    cout<<array[i]<<endl;
  }  
  return 0;
}