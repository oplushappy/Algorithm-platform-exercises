#include<iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  int n1;
  vector<int> vec;
  while(cin>>n1 && !cin.eof()){
    vec.push_back(n1);
  }
  for(auto it:vec) {
    int result = 1;
    for(int i = 1; i <= it; i++) {
      result *= i;
    }
    cout<<result<<endl;
  }
  return 0;
}