#include <iostream>
#include <ctime>
// #include <time.h> // c language 写法

using namespace std;

int main()
{

  // 获取当前时间
  time_t now = time(0);

  // ↑等价于↓:
  now = time(NULL);

  // 把now转换为str
  char* dt = ctime(&now);

  cout  << "it's time: " << dt << endl;

  // now -> tm
  tm *gmtm = gmtime(&now);
  dt = asctime(gmtm);
  cout << "UTC date&time: " << dt << endl;

  return 0;
}