// question 
#include <iostream>

using namespace std;

void zero_small(int &a, int &b) {
  if (a < b) {
    a = 0;
  } else {
    b = 0;

  }
}

int main() {
  int a, b;


  cout << "Enter two Digits: ";
  cin >> a >> b;


  zero_small(a,b);


  cout << "After setting the smaller number zero: " << a << " " << b<< endl;

  return 0;
}
