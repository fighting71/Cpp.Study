#include <iostream>

using namespace std;

int main()
{

  // 但为何第一个arr 不会断点？ 迷. -> skip
  int arr[] = {1, 2, 3};
  char str[] = "Hello C++";
  char str2[] = "Hello2 C++";

  // [cout] 标准输出流
  //  << : 流插入符
  //  endl : 换行符
  // cout << "str : " << str << endl;

  // [cin]  标准输入流
  // string name;

  // cout << "please enter your name:" << endl;

  // // >> : 流提取符
  // cin >> name;

  // cout << "Welcome " << name << endl;

  // [cerr] 标准错误流 会自动进入断点？ -> NO
  // 若不考虑流重定向，cerr相较于cout 不会经过缓冲区->直接显示。

  // 数组会自动断点... -> Res 迷之debug
  // int arr[] = {1, 2, 3};
  // char str2[] = "Hello2 C++";

  // // char xxx[] 会自动断点?!... -> Yes
  // char errorMsg[] = "Unable to read...";

  // cerr << "err msg : " << errorMsg << endl;

  // [clog] 标准日志流
  //  预定义的对象 clog 是 iostream 类的一个实例。clog 对象附属到标准错误设备，通常也是显示屏，但是 clog 对象是缓冲的。这意味着每个流插入到 clog 都会先存储在缓冲区，直到缓冲填满或者缓冲区刷新时才会输出。
  //  clog 也是与流插入运算符 << 结合使用的，如下所示：

  clog << "Error message : " << str << endl;

  return 0;
}