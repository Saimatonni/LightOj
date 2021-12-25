#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    int n,x1[100],y1[100],z1[100],x2[100],y2[100],z2[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>x1[i]>>y1[i]>>z1[i]>>x2[i]>>y2[i]>>z2[i];
    }
    int a=0,b=0,c=0,d=1001,e=1001,f=1001;
    for(int i=0;i<n;i++)
    {
     a=max(a,x1[i]);
     d=min(d,x2[i]);
     b=max(b,y1[i]);
     e=min(e,y2[i]);
     c=max(c,z1[i]);
     f=min(f,z2[i]);
  }
  int ans=(d-a)*(e-b)*(f-c);
  printf("Case %d: %d\n",i,ans<0?0:ans);
}
return 0;
}
