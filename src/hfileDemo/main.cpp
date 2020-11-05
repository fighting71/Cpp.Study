#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
  Circle c(3);
  cout << "Area=" << c.Area() << endl;
  return 0;
}

// 编译：g++ main.cpp Circle.cpp -o test
// .h 不参与编译