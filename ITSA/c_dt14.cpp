#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int cost;
  cin>>cost;
  getchar();
  int i = 1;
  char symbol[100];
  int weight[100];
  vector<string> vec;
  for(;i < 100;) {
    char le , ri, co, judge;
    // scanf("%c%c%c%d%c", &le, &symbol[i], &co, &weight[i], &ri);
    cin>>le>>symbol[i]>>co>>weight[i]>>ri;
    judge = getchar();
    i++;
    if(judge == '\n') break;
  }
  for(int j = 1; j < i; j++) {
    if(j*2 < i) {
      int ded = abs(weight[j] - weight[2 * j]);
      if(ded <= cost) {
        string temp;
        temp += symbol[j];
        temp += symbol[2 * j];
        vec.push_back(temp);
      }
    } 
    if((j * 2 + 1) < i) {
      int ded = abs(weight[j] - weight[2 * j + 1]);
      if(ded <= cost) {
        string temp;
        temp += symbol[j];
        temp += symbol[2 * j + 1];
        vec.push_back(temp);
      }
    } 
  }
  vector<string>::iterator iter;
  for(iter=vec.begin(); iter!=vec.end(); iter++) {
    if(iter == vec.begin()) {
      cout<<*iter;
      continue;
    }
    cout<<" "<<*iter;
  } 
  return 0;
}