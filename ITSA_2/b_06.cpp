#include<iostream>
using namespace std;

int main() {
  int season;
  while(cin >> season) {
    if(3 <= season && season <= 5) {
      cout << "Spring" << "\n";
    } else if(6 <= season && season <= 8) {
      cout << "Summer" << "\n";
    } else if(9 <= season && season <= 11) {
      cout << "Autumn" << "\n";
    } else if(12 == season || season <= 2) {
      cout << "Winter" << "\n";
    }
  }
  return 0;
}