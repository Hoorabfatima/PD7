#include<iostream>
using namespace std;
bool isPrime(int);
main()
{
 int num;
 cout<<"Enter number: ";
 cin>>num;
 cout<<isPrime(num);
}
bool isPrime(int num)
{
 
 if(num<=1)
  {
   return 0;
  }

 for(int i=2;num%i!=0;i++)
 {
  return 1;
   
 }
return false;
}