#include <iostream>

using namespace std;

int main()
{
  int var = 20;   // ����ֵ
  int *ip = NULL; // ָ�����   NULL ָ����һ�������ڱ�׼���е�ֵΪ��ĳ���

  // cout << "ip value : " << ip << endl;

  if (ip) // if �������жϿ�ָ�� ΪNULL->True
  {
    cout << "ip is null" << endl;
  }

  int *ptr; // ��ָ��NULL����һ��Ĭ�ϵ�ֵַ.

  // cout << "ip value : " << ptr << endl;

  if (ptr) // �˴��������
  {
    cout << "ptr is null" << endl;
  }

  ip = &var; // ָ������洢var�ĵ�ַ

  cout << "Value of var variable: ";
  cout << var << endl;

  //  �����ָ������д洢�ĵ�ַ
  cout << "Address stored in ip variable: ";
  cout << ip << endl;

  //  ����ָ���е�ַ��ֵ
  cout << "Value of *ip variable: ";
  cout << *ip << endl;

  return 0;
}