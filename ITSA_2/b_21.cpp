#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // while(1) {
    vector<float> v(10);
    for(auto &e : v) cin >> e;
    sort(v.begin(), v.end());
    printf("maximum:%.2f\n", v[v.size()-1]); 
    printf("minimum:%.2f\n", v[0]); 
  // }

  return 0;
}