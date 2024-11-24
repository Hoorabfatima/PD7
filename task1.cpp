#include<iostream>
using namespace std;
main()
{
  int i,j,rows;
  cout<<"Enter desired number of rows: ";
  cin>>rows;
  for(i=rows; i>0; i--)
  {
   for(j=i; j>0; j--)
   cout<<"*";
  cout<<endl;
  }
}