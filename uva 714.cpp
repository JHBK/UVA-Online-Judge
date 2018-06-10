#include<bits/stdc++.h>

using namespace std;

bool possible(long long n, long long k, long long l, long long j[])
{
   long long i, sum =0,count=1;
    for (i=0; i<n; i++)
    {
        if (j[i]>l)
        {
            return false;
        }
        else if (j[i]<=l)
        {
            sum +=j[i];
            if (sum>l)
            {
                sum = j[i];
                count++;
            }
        }
    }
    if (count<=k)
    {
        return true;

    }
    else
    {

        return false;

    }
}

int main()
{
    long long i,j,k,size,maximum=-1,sum=0,o;

    cin>>o;

    while ( o!=0  )
    {
        cin>>size>>k;
       long long a[size];
        maximum=-1;
        sum=0;
        int ans[501][501],n[501];
        for (i=0; i<size; i++)
        {
            cin>>a[i];
            sum+=a[i];
            maximum=max(maximum,a[i]);
        }
        int beg=maximum;
        int end=sum;
        int mid=(maximum+sum)/2;
        while (beg<end)
        {
            if(possible(size,k,mid,a)==true)
            {
                end=mid;
            }
            else if(possible(size,k,mid,a)==false)
            {
                beg=mid+1;
            }

            mid=(beg+end)/2;


        }

       // cout<<end<<endl;
         long long res = 0;

        for ( i=size-1; i>=0; i--){
            if (res+a[i] > end || j>i){
                j--;
                res = 0;
            }
            res += a[i];
            ans[j][n[j]++] = a[i];
        }

        for ( i=0; i<k; i++){
            for ( j=n[i]-1; j>=0; j--){
                if (i!=0 || j!=n[0]-1) printf(" ");
                printf("%d",ans[i][j]);
            }
            if (i != k-1) printf(" /");
        }
        printf("\n");
}

        o--;
    }

