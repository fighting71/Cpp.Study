#include <iostream>

using namespace std;

class Box
{
private:
  /* data */
  double width;
public:
  Box(const Box &obj);// 必须在此处定义
  Box(/* args */);// 定义了拷贝构造函数后必须要创建构造函数，不然无法创建Box...
  // ~Box();
  double length;
  void setWidth(double wid);
  double getWidth(void);
};

double Box::getWidth(void)
{
  return  width;
}

void Box::setWidth(double wid)
{
  width = wid;
}

// 如果在类中没有定义拷贝构造函数，编译器会自行定义一个
Box::Box(const Box &obj)
{
  cout << "obj copy" << endl;
}

int main()
{
  Box box;

  box.length = 10.0;
  cout << "length of box : " << box.length << endl;

  box.setWidth(10.0);

  cout << "width of box : " << box.getWidth() << endl;

  Box box2 = box; // 此处非传递引用 而是调用了拷贝构造函数...!

  cout << &box2 << endl;
  cout << &box << endl;
  cout << "width of box2 : " << box2.getWidth() << endl;

  char c;

  cin >> noskipws >> c;

  return 0;
}

Box::Box(/* args */)
{
}

// Box::~Box()
// {
// }
