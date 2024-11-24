#include<iostream>
using namespace std;
void upper(int);
void lower(int);
main()
{
  int rows;
  cout<<"Enter rows: ";
  cin>>rows;
  upper(rows);
  lower(rows);
}
void upper(int rows)
{
  int i,j,k;
  for(i=rows;i>0;i--)
{ 
  for(j=1;j<i;j++)
  cout<<" ";
  for(k=j;k<=rows;k++)
 {
  cout<<"*";
 }
 cout<<endl;
}
}
void lower(int rows)
{
  int i,j,k;
 for(i=rows;i>0;i--)
{ 
  for(j=0;j<i;j++)
  cout<<"*";
  cout<<endl;
  for(k=j;k<=rows;k++)
 {
  cout<<" ";
 }
}
}
 
