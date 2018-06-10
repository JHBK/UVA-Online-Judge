#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t,t1,t2,f,a,c1,c2,c3,i,avr,sum;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&c1,&c2,&c3);
            if(c1<=c2 && c1<=c3)
                avr=(c2+c3)/2;
            else if(c2<=c1 && c2<=c3)
                avr=(c1+c3)/2;
            else if(c3<=c1 && c3<=c2)
                avr=(c1+c2)/2;
            sum=t1+t2+f+a+avr;
            if(sum>=90)
                printf("Case %d: A\n",i);
            else if(sum>=80)
                printf("Case %d: B\n",i);
            else if(sum>=70)
                printf("Case %d: C\n",i);
            else if(sum>=60)
                printf("Case %d: D\n",i);
            else if(sum<60)
                printf("Case %d: F\n",i);
        }
    }
}
