#include<iostream>
template <typename T>
void swap(T&a,T&b)
{
  T temp;
  temp= a;
  a= b;
  b= temp;
}
int main()
{
  int a=10;
  int b=20;
  std::cout<<"before"<<std::endl;
  std::cout<<"a="<<a<<" "<<"b="<<b<<std::endl;
  swap(a,b);
  std::cout<<"after"<<std::endl;
  std::cout<<"a="<<a<<" "<<"b="<<b<<std::endl;
  double c=1.25;
  double d=2.54;
  std::cout<<"before"<<std::endl;
  std::cout<<"c="<<c<<" "<<"d="<<d<<std::endl;
  swap(c,d);
  std::cout<<"after"<<std::endl;
  std::cout<<"c="<<c<<" "<<"d="<<d<<std::endl;
  return 0;
}


