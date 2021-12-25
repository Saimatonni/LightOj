#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  double a,b,c,d,r;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    cin>>a>>b>>c>>r;
    r=r/(r+1);
    d=a*sqrt(r);
    printf("Case %d: %lf\n",i,d);
  }
  return 0;
}
