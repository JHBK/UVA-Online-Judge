#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n, ba, h,w,p,m,c;
    while (scanf("%d%d%d%d", &n, &ba, &h, &w) != EOF)
    {
        m=12345678;
        while(h--)
        {
            cin>>p;


            for(int i=0; i<w; i++)
            {   int b;
                cin >> b;
                if (b >= n)
                {
                    m = min(n * p,m);

                }
            }


        }

        if(m<=ba)
        {
            cout<<m<<endl;
        }
        else
        {

            cout<<"stay home"<<endl;
        }

    }

}
