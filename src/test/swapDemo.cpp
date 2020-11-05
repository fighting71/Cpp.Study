#include <iostream>
using namespace std;
 
// ��������
void swap(int x, int y);
void test3 ();
void test2 ();
void test ();
// ��������
void swap(int x, int y)
{
   int temp;
 
   temp = x; /* ���� x ��ֵ */
   x = y;    /* �� y ��ֵ�� x */
   y = temp; /* �� x ��ֵ�� y */
  
   return;
}

// ��������
void swap(int *x, int *y)
{
   int temp;
   temp = *x;    /* �����ַ x ��ֵ */
   *x = *y;        /* �� y ��ֵ�� x */
   *y = temp;    /* �� x ��ֵ�� y */
  
   return;
}

// ��������
void swapByRef(int &x, int &y)
{
   int temp;
   temp = x; /* �����ַ x ��ֵ */
   x = y;    /* �� y ��ֵ�� x */
   y = temp; /* �� x ��ֵ�� y  */
  
   return;
}

int main ()
{
  test();
  test2();
  test3();
  return 0;
}

void test3 ()
{
  cout << "���õ���demo" << endl;
  // �ֲ���������
   int a = 100;
   int b = 200;
 
   cout << "����ǰ��a ��ֵ��" << a << endl;
   cout << "����ǰ��b ��ֵ��" << b << endl;
 
   /* ���ú���������ֵ */
   swapByRef(a, b);
 
   cout << "������a ��ֵ��" << a << endl;
   cout << "������b ��ֵ��" << b << endl;
}

// ָ�����
void test2 ()
{
  cout << "ָ�����demo" << endl;
  // �ֲ���������
   int a = 100;
   int b = 200;
 
   cout << "����ǰ��a ��ֵ��" << a << endl;
   cout << "����ǰ��b ��ֵ��" << b << endl;

   /* ���ú���������ֵ
    * &a ��ʾָ�� a ��ָ�룬������ a �ĵ�ַ 
    * &b ��ʾָ�� b ��ָ�룬������ b �ĵ�ַ 
    */
   swap(&a, &b);

   cout << "������a ��ֵ��" << a << endl;
   cout << "������b ��ֵ��" << b << endl;
}

// ��ֵ����demo
void test ()
{
  cout << "��ֵ����demo" << endl;
   // �ֲ���������
   int a = 100;
   int b = 200;
 
   cout << "����ǰ��a ��ֵ��" << a << endl;
   cout << "����ǰ��b ��ֵ��" << b << endl;
 
   // ���ú���������ֵ
   swap(a, b);
 
   cout << "������a ��ֵ��" << a << endl;
   cout << "������b ��ֵ��" << b << endl;
}
