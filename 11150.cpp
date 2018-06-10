#include<bits/stdc++.h>

using namespace std ;
int main()
{
    int c, i,r, sum;
    while(scanf("%d",&c)==1)
    {
            sum=c;
         while(c>=3)
        {
            i=c/3;
            c=c%3;
            c+=i;
            sum+=i;
        }

  if(c==2)
  {
    cout<<sum+1<<endl;
  }
  else{
    cout<<sum<<endl;
  }

    }
}

