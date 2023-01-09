#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
  int number;
  vector<int> vec;
  while(cin>>number && !cin.eof()){
    int count = 0;
    for(int j = number - 1; j >= 2; j--){
      for(int i = 2; i < j; i++) {
        if(j % i == 0) {
          count++;
          break;
        }
      }
      if(count == 0){
        vec.push_back(j);
        break;
      }
    }
  }
  for(auto it:vec) {
    cout<<it<<endl;
  }
  return 0;
}