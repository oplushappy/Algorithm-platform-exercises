#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, a1, a2, a3;
  string s;
  getline(cin ,s);
  size_t found = 0;
  int current = 0;
  vector<int> v;
  do{
    found = s.find(',', found);
    if(found != string::npos) {
      string tmp = s.substr(current, found - current);
      // cout << tmp << " ";
      v.push_back(stoi(tmp));
      found += 1;
      current = found;
    }
  } while(found != string::npos);
  v.push_back(stoi(s.substr(current)));
  // cout << v[0]<< " " << v[1] << " "<< v[2] << " " << v[3] << "\n";
  
  N = v[0]; a1 = v[1]; a2 = v[2]; a3= v[3];
  int money = N - (15 * a1 + 20 * a2 + 30 * a3);
  if(money < 0) {
    cout << 0 << "\n";
  } else {
    int n_50 = money / 50;
    money %= 50;
    int n_5 = money / 5;
    money %= 5;
    int n_1 = money;
    cout << n_1 << ',' << n_5 << ',' << n_50 << "\n";
  }
  return 0;
}