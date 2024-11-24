#include<iostream>
using namespace std;
bool isPrime(int);
int primorial(int);
main()
{
 int num;
 cout<<"Enter number: ";
 cin>>num;
 cout<<primorial(num);
}
bool isPrime(int number)
{
 int count=0;
 for(int i=1;i<=number;i++)
{
  if(number%i==0)
  count++;
}
  if(count==2)
  return 1;
  else 
  return 0;
 
}
int primorial(int num)
{
  int product=1;
  int number=2;
  int i=1;
  while(i<=num)
  {
   if(isPrime(number))
   {
    product=product*number;
    i++;
   }
   number++;
}
return product;
}


