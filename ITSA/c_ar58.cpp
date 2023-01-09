#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int num;
  cin>>num;
  vector<string> vec(30,0);
  string temp1, temp2;
  for(int i = 0; i < num; i++) {
    cin>>vec[i]>>vec[i+1];
    
  }
  for(int i = 0; i < num; i++) {
    cout<<vec[i]<<"\n";
  }
  return 0;
}