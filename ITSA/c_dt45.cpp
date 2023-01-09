#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string action;
  cin>>action;
  vector<int> vec;
  int temp;
  for(int i = 0; i < 16; i++) {
    cin>>temp;
    vec.push_back(temp);
  }
  return 0;
}