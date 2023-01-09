#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main() {
  int num = 0;
  vector<int> vec;
  do{
    cin>>num;
    vec.push_back(num);
  } while(getchar() != '\n');
  sort(vec.begin(), vec.end());
  // string s = "";
  // for(int i = 0; i < vec.size(); i++) {
  //   s += to_string(vec[i]);
  // }

  int min = 0;
  for(int i = 0; i < vec.size(); i++) {
    min += vec[i] * pow(10, vec.size()-i-1);
  }

  // int min = stoi(s);
  // reverse(s.begin(), s.end());
  // int max = stoi(s);

  // reverse(vec.begin(), vec.end());
  // int max = 0;
  // for(int i = 0; i < vec.size(); i++) {
  //   max += vec[i] * pow(10, vec.size()-i-1);
  // }

  // string s = to_string(min);
  // reverse(s.begin(), s.end());
  // int max = stoi(s);
  int max = 0;
  for(int i = 0; i < vec.size(); i++) {
    max += vec[i] * pow(10, i);
  }

  cout<<max-min<<endl;
  return 0;
}