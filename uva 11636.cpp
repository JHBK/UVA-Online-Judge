#include<bits/stdc++.h>

using namespace std ;

int main()

{
    int t=0,r=1,ca=0;


    while(cin>>t&&t>=0)
    {
        ca++;
        int c=0 ;

        while(r<t)
        {
            r=r*2;
            c++;
        }
        r=1;
        cout<<"Case "<<ca<<": "<<c<<endl;


    }


}
