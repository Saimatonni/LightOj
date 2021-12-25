#include<bits/stdc++.h>
using namespace std;
int main()
{
  int c,r,n,t,s;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    cin>>n;
    s=ceil(sqrt(n));
    if(s%2==0)
    {
      if(s*s-n<s)
      {
        c=s;
        r=s*s-n+1;
      }
      else
      {
        c=n-((s-1)*(s-1));
        r=s;
      }
    }
    else
    {
      //swap(r,c);
      if(s*s-n<s)
      {
        c=s*s-n+1;
        r=s;
      }
      else
      {
        c=s;
        r=n-((s-1)*(s-1));
      }
    }
    printf("Case %d: %d %d\n",i,c,r);
  }
  return 0;
}
