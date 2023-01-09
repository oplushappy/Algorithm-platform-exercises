#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int total;
  cin>>total;
  vector<int> vec[total];
  int id, s1, s2, s3, a;
  for(int i = 0; i < total; i++) {
    cin>>id>>s1>>s2>>s3>>a;
    vec[i].push_back(id);
    vec[i].push_back(s1);
    vec[i].push_back(s2);
    vec[i].push_back(s3);
    a = (s1 + s2 + s3) / 3;
    vec[i].push_back(a);
  } 
  for(int i = 0; i < total; i++) {
    vector<int>::iterator iter;
    for(iter = vec[i].begin(); iter!=vec[i].end(); iter++) {
      if(iter == vec[i].begin()) {
        cout<<*iter;
        continue;
      }
      cout<<" "<<*iter;
    }
    cout<<endl;
  }
  return 0;
}