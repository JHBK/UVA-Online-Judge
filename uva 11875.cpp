#include<bits/stdc++.h>

using namespace std;

int main (){
 int t,c=1;

 cin>>t;

 while (t--)
{

    int n;
    cin>>n;
    int a[n];

    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }


    sort(a,a+n);

    printf("Case %d: %d\n",c,a[n/2]);

    c++;


}


}
