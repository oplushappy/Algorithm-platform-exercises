#include <iostream>
#include <vector>
using namespace std;

int main() {
  int total;
  cin>>total;
  vector<int> vec;
  int all, half;
  for(int i = 0; i < total; i++) {
    cin>>all>>half;
    vec.push_back(all * 250 + half * 175);
  }
  for(int i = 0; i < total; i++) {
    cout<<vec[i]<<endl;
  }
  return 0;
}