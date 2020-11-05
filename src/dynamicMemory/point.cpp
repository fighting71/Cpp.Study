#include <iostream>

using namespace std;

void fun(char *p)
{
  p = "cba"; // “cba”存放在文字常量区，让p指向常量"abc",这里改变的是指针值，实参并不会改变
}

int main()
{

  char *p = "abc";

  fun(p);

  // C/C++语法中输出字符串指针，就是输出字符串，也就是说输出一个char*的指针一定是输出一个字符串，而不会输出指针，其它的类型都不会这样，所以你把它转成void*就会输出地址。
  cout << p << endl;
  // cout << *p << endl;

  return 0;

} 