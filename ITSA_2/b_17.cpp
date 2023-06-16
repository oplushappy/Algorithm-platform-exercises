#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;


int main() {
  string str;
  // while(getline(cin, str)) {
  getline(cin, str);
  stringstream ss(str);
  // ss << str;
  string temp;
  vector<string> v;
  while(getline(ss, temp, ' ')) {
    for(int i = 0; i < temp.length(); i++) {
      temp[i] = tolower(temp[i]);
    }
    v.push_back(temp);
    // if(find(v.begin(), v.end(), temp) == v.end()) {
    //   v.push_back(temp);
    // }
  }
  for(int i = v.size() - 1; i > 0; i--) {
    for(int j = i - 1; j > 0; j--) {
      if(v[i] == v[j]) {
        v.erase(v.begin() + i);
        break;
      }
    }
  }
  for(int i = 0; i < v.size(); i++) {
    if(i == v.size() - 1) {
      cout << v[i] << "\r\n";
    } else{
      cout << v[i] << " ";
    }
    
  }

  // }
  return 0;
}