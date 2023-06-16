#include <iostream>
using namespace std;

int main() {
  int mon, day;
  cin >> mon >> day;
  switch(mon){
    case 1:
      if(day >= 1 && day <= 20) {
        cout << "Capricorn" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Aquarius" << endl;
      }
      break;
    case 2:
      if(day >= 1 && day <= 20) {
        cout << "Aquarius" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Pisces" << endl;
      }
      break;
    case 3:
      if(day >= 1 && day <= 20) {
        cout << "Pisces" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Aries" << endl;
      }
      break;
    case 4:
      if(day >= 1 && day <= 20) {
        cout << "Aries" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Taurus" << endl;
      }
      break;
    case 5:
      if(day >= 1 && day <= 20) {
        cout << "Taurus" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Gemini" << endl;
      }
      break;
    case 6:
      if(day >= 1 && day <= 20) {
        cout << "Gemini" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Cancer" << endl;
      }
      break;
    case 7:
      if(day >= 1 && day <= 20) {
        cout << "Cancer" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Leo" << endl;
      }
      break;
    case 8:
      if(day >= 1 && day <= 20) {
        cout << "Leo" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Virgo" << endl;
      }
      break;
    case 9:
      if(day >= 1 && day <= 20) {
        cout << "Virgo" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Libra" << endl;
      }
      break;
    case 10:
      if(day >= 1 && day <= 20) {
        cout << "Libra" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Scorpio" << endl;
      }
      break;
    case 11:
      if(day >= 1 && day <= 20) {
        cout << "Scorpio" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Sagittarius" << endl;
      }
      break;
    case 12:
      if(day >= 1 && day <= 20) {
        cout << "Sagittarius" << endl;
      } else if(day >= 21 && day <= 31) {
        cout << "Capricorn" << endl;
      }
      break;
  }
  return 0;
}