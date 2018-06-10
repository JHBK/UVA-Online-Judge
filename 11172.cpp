#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int a,b,t;
  scanf("%d",&t);
  while(t--)
  {
       cin>>a>>b;
       if(a<b)
       {
           cout<<"<"<<endl;
       }
       else if (a>b)
       {
           cout<<">"<<endl;
       }
       else if(a==b)
       {
           cout<<"="<<endl;
       }
  }
  return 0;
}
