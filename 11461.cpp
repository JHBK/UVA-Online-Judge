
#include<bits/stdc++.h>
using namespace std ;

int main()

{
    int a, b,c=0,r=0,r1=0;

    while(cin>>a>>b)


          {
              if(a==0&&b==0)
                 break;
              for(int i=1;i<=b;i++)

                {

                   // cout<<i<<endl;
                    //r=sqrt(i);

                    r1=i*i;

                    //cout<<r1<<endl;

                    if(r1>b)
                    {
                        cout<<c<<endl;
                        c=0;
                        break;
                    }
                    else if( r1 >= a ) {

                        c++;
                    }
                }

          }




}


