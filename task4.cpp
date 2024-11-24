#include<iostream>
using namespace std;
int triangle(int);
main()
{
  int num, result;
  cout<<"Enter the number of triangle: ";
  cin>>num;
  result=triangle(num);
  cout<<"dots in the triangle:"<<result;
}
int triangle(int num)
{
  int res=0,n1=0,n2=0;
  for(n2=1;n2<=num;n2++)
  {
   res=n1+n2;
   n1=res;
   }
  return res;
}