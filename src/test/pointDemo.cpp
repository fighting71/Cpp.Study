#include <iostream>

using namespace std;

int main()
{
  int var = 20;   // 具体值
  int *ip = NULL; // 指针变量   NULL 指针是一个定义在标准库中的值为零的常量

  // cout << "ip value : " << ip << endl;

  if (ip) // if 可用于判断空指针 为NULL->True
  {
    cout << "ip is null" << endl;
  }

  int *ptr; // 不指定NULL会有一个默认地址值.

  // cout << "ip value : " << ptr << endl;

  if (ptr) // 此处不会进入
  {
    cout << "ptr is null" << endl;
  }

  ip = &var; // 指针变量存储var的地址

  cout << "Value of var variable: ";
  cout << var << endl;

  //  输出在指针变量中存储的地址
  cout << "Address stored in ip variable: ";
  cout << ip << endl;

  //  访问指针中地址的值
  cout << "Value of *ip variable: ";
  cout << *ip << endl;

  return 0;
}