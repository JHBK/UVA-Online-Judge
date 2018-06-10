#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,c=0;
    cin>>t;
    while (t!=0)
    {
        c++;
        int r=0 ,n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            r=max(r,a[i]);

        }

        cout<<"Case "<<c<<":"<<" "<<r<<endl;
        t--;
    }


}
