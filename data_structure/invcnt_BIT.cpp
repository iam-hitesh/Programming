#include<bits/stdc++.h>
using namespace std;
#define siz 200000
long long int bit[siz+1];
pair<int,int> a[siz+1];
long long int que(int x)
{
    long long int ans=0;
    while(x>0)
    {
        ans+=bit[x];
        x-=(x&-x);
    }
    return ans;
}
void update(int ind,int n)
{
    while(ind<=n)
    {
        bit[ind]++;
        ind+=(ind&-ind);
    }
}
int main()
{
    int t,n,r,maxi;
    long long int cnt;
    scanf("%d",&t);
    while(t--)
    {
        cnt=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i].first);
            a[i].second=i;
        }
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++)
        {
            cnt+=que(n)-que(a[i].second);
            update(a[i].second,n);
        }
        printf("%lld\n",cnt);
        for(int i=1;i<=n;i++)
            bit[i]=0;
    }
}
