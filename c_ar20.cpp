#include <iostream>
#include <vector>
using namespace std;


int main() {
  int max;
  cin>>max;
  int num;
  vector<int> vec(max+1,0);
  for(int i = 0; i < 128; i++) {
    cin>>num;
    if(getchar() == '\n') break;
    if(vec[num] >= 1 || num > max){
      cout<<0<<endl;
      return 0;
    } 
    vec[num]++;
  }
  cout<<1<<endl;
  return 0;
}