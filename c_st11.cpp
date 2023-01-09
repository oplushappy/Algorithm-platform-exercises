#include <iostream>
using namespace std;

int main() {
  int r;
  cin>>r;
  if(r % 2 == 0) r -= 1; 
  string s[r];
  for(int i = 0; i < (r+1)/2; i++) {
    for(int j = 0; j < (r - (2 * i + 1)) / 2; j++) {
      s[i] += ' ';
    }
    for(int j = 0; j < 2 * i + 1; j++) {
      s[i] += '*';
    }
  }
  for(int i = 0; i < (r+1)/2; i++) {
    cout<<s[i]<<endl;
  }
  for(int i = (r+1)/2 - 2; i >= 0; i--) {
    cout<<s[i]<<endl;
  }
  return 0;
}