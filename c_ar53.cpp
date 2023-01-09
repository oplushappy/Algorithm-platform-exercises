#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int num;
  cin>>num;
  vector<int> vec;
  int temp;
  for(int i = 0; i < num; i++) {
    cin>>temp;
    vec.push_back(temp);
  }
  sort(vec.begin(), vec.end());
  for(int i = 0; i < num ; i++) {
    cout<<vec[i]<<"\n";
  }
  return 0;
}