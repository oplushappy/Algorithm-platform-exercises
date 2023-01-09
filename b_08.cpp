#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
  int number;
  vector<int> vec;
  while(cin>>number && !cin.eof()){
    int count = 0;
    for(int i = 2; i < number; i++) {
      if(number % i == 0) {
        count++;
        break;
      }
    }
    if(count == 0){
      vec.push_back(1);
    } else {
      vec.push_back(0);
    }

  }
  for(auto it:vec) {
    if(it) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}