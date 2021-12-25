#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    int n,p,q;
    cin>>n>>p>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];

    }
    sort(a,a+n);
    int sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
      sum+=a[i];
      if(sum<=q)
      {
        cnt++;
        if(cnt>=p)
        {break;}
      }
    }
    printf("Case %d: %d\n",i,cnt);
  }
  return 0;
}
