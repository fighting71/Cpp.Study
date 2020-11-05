#include <iostream>

using namespace std;

class Box
{
  double width;

public:
  friend void printWidth(Box box);
  void setWidth(double wid);
};

// 成员函数定义
void Box::setWidth(double wid)
{
  width = wid;
  this -> width = wid;
  // 不能使用友元函数，因为友元不属于类的成员
  // this -> printWidth();
}

// 请注意：printWidth() 不是任何类的成员函数
void printWidth(Box box)
{
  /* 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员 */
  // 有点nb,可以访问私有变量... 既有点像扩展方法，又像分布类
  cout << "Width of box : " << box.width << endl;
}

// 程序的主函数
int main()
{
  Box box;

  // 使用成员函数设置宽度
  box.setWidth(10.0);

  // 使用友元函数输出宽度
  printWidth(box);

  return 0;
}

// 友元函数