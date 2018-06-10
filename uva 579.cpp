
#include<bits/stdc++.h>
using namespace std;

int main ()
{
 double h ,m,r1,r2,mr;
 while(scanf("%lf:%lf", &h, &m)==2)
    {

   if(h==0&&m==0)
   {
       break;
   }

   r1=((h*30)+(m/2));
   r2=m*6;

   mr=r1-r2;

   if(mr<0)
   {
       mr=mr*(-1);
   }

    if(mr>180)
   {
       mr=360-mr;
   }


   printf("%.3lf\n",mr);


 }
 return 0;

}
