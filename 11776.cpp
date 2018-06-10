#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,s[1005],e[1005],c=0,t;
    cin>>t;
    while(t--)
    {
        cin>>n;


        for(int i=1; i<=n; i++)
        {

            scanf("%d%d",&s[i],&e[i]);
        }



          long long   int i, j,r=0;



            i = 0;
           // printf("%d ", i);


            for (j = 1; j < n; j++)
            {

                if (s[j] >= e[i])
                {
                    //printf ("%d ", j);
                    i = j;
                    r++;
                }
            }


        cout<<"Case "<<++c<<": "<<r<<endl;




    }


}
