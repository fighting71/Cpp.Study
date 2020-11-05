#include <iostream>
#include <string>

using namespace std;

// 函数模板
// template <typename type> ret-type func-name(parameter list)
// {
//    // 函数的主体
// }

template <typename T>
inline T const &Max(T const &a, T const &b)
{
  return a < b ? b : a;
}

// 类模板
// template <class type> class class-name {
// ...
// }

#include <vector>
template <class T>
class Stack
{
private:
  vector<T> elems;

public:
  void push(T const &ele)
  {
    elems.push_back(ele);
  }
  void pop()
  {
    if (elems.empty())
    {
      throw out_of_range("Stack<>::pop(): empty stack");
    }
    elems.pop_back();
  }
  bool empty() const
  {
    return elems.empty();
  }
  T top() const
  {
    if (elems.empty())
    {
      throw out_of_range("Stack<>::top(): empty stack");
    }
    // 返回最后一个元素的副本
    return elems.back();
  }
};

int main()
{
  int i = 39, j = 20;

  cout << "Max(i, j): " << Max(i, j) << endl;

  double f1 = 13.5, f2 = 20.7;
  cout << "Max(f1, f2): " << Max(f1, f2) << endl;

  string s1 = "Hello", s2 = "World";
  cout << "Max(s1, s2): " << Max(s1, s2) << endl;

  try
  {
    Stack<int> intStack;       // int 类型的栈
    Stack<string> stringStack; // string 类型的栈

    // 操作 int 类型的栈
    intStack.push(7);
    cout << intStack.top() << endl;

    // 操作 string 类型的栈
    stringStack.push("hello");
    cout << stringStack.top() << std::endl;
    stringStack.pop();
    stringStack.pop();
  }
  catch (exception const &ex)
  {
    cerr << "Exception: " << ex.what() << endl;
    return -1;
  }

  return 0;
}