#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a,b;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    cin>>a>>b;
    int e=(a/3)*2;
    int f=a%3;
    if(f==2)
    {e+=1;}
    int g=(b/3)*2;
    int h=b%3;
    if(h==2)
    {g+=1;}
    int ans=g-e;
    ans+=1;
    if(f==1)
    {ans-=1;}
    printf("Case %d: %d\n",i,ans);
  }
  return 0;
}
