#include <iostream>
using namespace std;

void subprogram(int x) {
  x = 30;
}

int main() {
  int y = 20;
  subprogram(y);
  cout << y;
  return 0;
}
