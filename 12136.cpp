#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0;

    cin>>t;

    while (t!=0)

    {
        int ss1,se1,ts1,te1,ss2,se2,ts2,te2;

        scanf("%d:%d %d:%d",&ss1,&se1,&ts1,&te1);

        ss1=ss1*60+se1;

        ts1=ts1*60+te1;

        scanf("%d:%d %d:%d",&ss2,&se2,&ts2,&te2);

        ss2=ss2*60+se2;

        ts2=ts2*60+te2;

         printf("Case %d: ", ++c);

        if(max(ss1,ss2)>min(ts1,ts2))
        {

            cout<<"Hits Meeting"<<endl;
        }
        else
        {

            cout<<"Mrs Meeting"<<endl;
        }







        t--;
    }


}
