#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec;
  int number;
  for(int i = 0; i < 6; i++) {
    cin>>number;
    vec.push_back(number);
  }
  int total = 0;
  for(int i = 0; i < 6; i++) {
    total += vec[i] * vec[i] * vec[i];
  }
  cout<<total<<endl;
  return 0;
}