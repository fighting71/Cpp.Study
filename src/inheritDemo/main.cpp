/*
一个派生类继承了所有的基类方法，但下列情况除外：

基类的构造函数、析构函数和拷贝构造函数。
基类的重载运算符。
基类的友元函数。
*/
#include <iostream>
#include "../comm.h"

using namespace std;

// basic class
class Shape
{
private:
  /* data */
public:
  void setWidth(int w)
  {
    width = w;
  }
  void setHeigth(int h)
  {
    heigth = h;
  }

protected:
  int width;
  int heigth;
};

class PaintCost
{
public:
  int getCost(int area)
  {
    return area * 70;
  }
};

// format : class derived-class: access-specifier base-class
// 一个类可以派生自多个类
class Rectangle : public Shape,
                  // virtual // 虚继承--（在创建对象的时候会创建一个虚表; 可避免环状集成导致的多次创建父类 : A->D, B->D, C->(A，B) 这个继承会使D创建两个对象
                  public // public or private(default) 修饰符决定了 此类的实例/对象 -> 是否能使用父类的公共方法
                  PaintCost
{
public:
  int getArea()
  {
    return width * heigth;
  }
};

int main()
{
  Rectangle instance;
  instance.setWidth(5);
  instance.setHeigth(10);

  int area = instance.getArea();

  cout << "Total area: " << area << endl;

  cout << "Total paint cost: $" << instance.getCost(area) << endl;

  preExit();
  return 0;
}

void preExit()
{
  char c;
  cin >> noskipws >> c;
}