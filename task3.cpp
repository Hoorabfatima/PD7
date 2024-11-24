#include<iostream>
using namespace std;
main()
{
 int num;
 cout<<"Enter the number to amplify: ";
 cin>>num;
 for(int n=1; n<=num; n++)
 {
  if(n%4!=0)
   cout<<n<<",";
  if(n%4==0)
  cout<<n*10<<",";
 }
}
  