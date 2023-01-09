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
  for(vector<int>::iterator iter=vec.end()-1; iter!=vec.begin()-1; iter--) {
    if(iter==vec.end()-1) {
      cout<<*iter;
      continue;
    }
    cout<<" "<<*iter;
  }
  cout<<endl;
  return 0;
}