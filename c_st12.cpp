#include <iostream>
using namespace std;

int main() {
  int a,b;
  cin>>a>>b;
  int total = abs(a-b);
  if(a > b) {
    for(int  i = a; i >= b; i--) {
       for(int k = 0; k < i; k++) {
        cout<<'*';
       }
       cout<<endl;
    }
  } else {
    for(int  i = a; i <= b; i++) {
      for(int k = 0; k < i; k++) {
        cout<<'*';
      }
      cout<<endl;
    }
  }
  return 0;
}