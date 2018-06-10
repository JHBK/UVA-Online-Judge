#include<bits/stdc++.h>

using namespace std ;


int main ()
{
    int n=0, q=0,res=0,p=1;



  while (  cin>>n>>q && n!=0&&q!=0){

p++;
    int a[n];

    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }



    sort(a,a+n);

   int size=n;
   cout<<"CASE# "<<p-1<<":"<<endl;


    while (q--)
    {

        int c=0;
        cin>>res;
        for(int i =0 ; i<size;i++)
        {
            if(a[i]==res)
            {
                c=1;
                cout<<res<<" found at "<<i+1<<endl;
                break;
            }
            if(a[i]>res)
                break;
        }
        if(c!=1)
        {
            cout<<res<<" not found"<<endl;
        }

    }

  }

}
