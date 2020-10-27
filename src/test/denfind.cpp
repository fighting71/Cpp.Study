#include <iostream>
using namespace std;

typedef int feet;

enum Source{
  Web = 1,
  Local = 2,
  Server = 3
} source;

int main()
{

  Source source = Web;

  feet num = 2;

  cout  <<  num <<  endl;
  cout  <<  source <<  endl;

  return 0;
}