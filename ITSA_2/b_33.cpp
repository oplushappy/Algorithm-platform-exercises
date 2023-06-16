#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  string s;
  while(getline(cin, s)) {
    stringstream ss(s);
    string tmp;
    int count = 0; 
    double total = 0;
    while(getline(ss, tmp, ' ')) {
      count++;
      total += stof(tmp);
    }
    double avg = total / count;
    cout << "Size: " << count << "\n";
    cout << "Average: " << fixed << setprecision(3) << avg << endl;
  }
  return 0;
}