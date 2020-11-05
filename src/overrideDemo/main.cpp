#include <iostream>
#include "../comm.h"

using namespace std;

// 函数重载...

// 略

// 操作符重载
class Box
{
private:
  int amount;

public:
  void show()
  {
    cout << "curr amount: " << this->amount << endl;
  }
  void emp() const // 常量函数 : 对于常量函数，最关键的不同是编译器不允许其修改类的数据成员
  {
    // error :
    // cout << amount++ <<endl;
    cout << amount <<endl;
  }
  Box(int n)
  {
    amount = n;
  }
  Box operator+(const Box &b)
  {
    Box box(this->amount + b.amount);
    return box;
  }
};

int main()
{

  Box box(10), box2(20);
  Box box3 = box + box2;
  box3.show();

  preExit();
  return 0;
}

void preExit()
{
  char c;
  cin >> noskipws >> c;
}
