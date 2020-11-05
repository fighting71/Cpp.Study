#include <iostream>
#include <time.h>

using namespace std;

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

// ref as return value
double &setValues(int i)
{
  return vals[i]; // 返回第 i 个元素的引用
}

// ref as arg
void setNum(int &num)
{
  srand((unsigned)time(0));
  num = rand();
}

int main()
{
  int i; // 存在初始值
  double d;

  cout << i << endl;

  // ref variable
  int &r = i;
  double &s = d;

  setValues(1) = 20.23; // 改变第 2 个元素

  i = 8;
  cout << i << endl;

  setNum(i);

  cout << i << endl;

  return 0;
}

/*
引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量。
*/

/*
引用很容易与指针混淆，它们之间有三个主要的不同：

  不存在空引用。引用必须连接到一块合法的内存。
  一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
  引用必须在创建时被初始化。指针可以在任何时间被初始化。
*/