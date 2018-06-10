

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;
int ss[30000];
int set[30000];
int res=0;

int set_find(int p)
{
    if(set[p]<0)return p;
    return set[p]=set_find(set[p]);
}
void join(int a,int b)
{
    a=set_find(a);
    b=set_find(b);
    if(a!=b)
    {
        set[a]=b;
        ss[b]+=ss[a];
        res=(ss[b]>res?ss[b]:res);
    }
}
int main()
{
    int x,y;
    int T,n,i,m;
    cin>>T;
    while(T--)
    {

        memset(set,-1,sizeof(set));
        res=1;
        cin>>n>>m;
        for(i=0; i<=n; ++i)
            ss[i]=1;
        for(i=0; i<m; ++i)
        {
            cin>>x>>y;
            join(x,y);
        }
        cout<<res<<endl;
    }
    return 0;
}

