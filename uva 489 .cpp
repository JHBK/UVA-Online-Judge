#include<bits/stdc++.h>


using namespace std ;


char w[105];
char g[105];



int main ()
{

    int r;
    while (cin >> r, r != -1)
    {

        printf("Round %d\n",r);

            scanf("%s",w);
            scanf("%s",g);



            int l=strlen(g);

            int l2=strlen(w);

           int last,check=0,wa=0;

            for(int i=0;i<l;i++)
            {
                int last=1;

                for(int j=0;j<l2;j++)
                {
                    if(g[i]==w[j])
                    {
                        check++;
                        w[j]=0;
                        last=0;
                    }
                }




                 if(last)
                {
                    wa++;

                }
                if(wa<7&&check==l2) break;
                if(wa>=7&&check==l2) break;
            }
            if(wa<7)
            {
                if(check==l2) printf("You win.\n");
                else    printf("You chickened out.\n");
            }
            else
                printf("You lose.\n");
        }
    }






