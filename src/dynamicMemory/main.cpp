#include <iostream>
using namespace std;

int main()
{
  double *pvalue = NULL; // 初始化为 null 的指针
  pvalue = new double;   // 为变量请求内存

  *pvalue = 29494.99; // 在分配的地址存储值
  cout << pvalue << endl;

  cout << "Value of pvalue : " << *pvalue << endl;

  delete pvalue; // 释放内存

  cout << pvalue << endl;// 野指针...

  cout << *pvalue << endl;

  return 0;
}