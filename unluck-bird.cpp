#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i;
  double v1,v2,v3,a1,a2,t,t1,t2,s1,s2,d;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>v1>>v2>>v3>>a1>>a2;
    t1=v1/a1;
    t2=v2/a2;
    t=max(t1,t2);
    s1=(v1*v1)/(2*a1);
    s2=(v2*v2)/(2*a2);
    d=t*v3;
    printf("Case %d: %lf %lf\n",i,s1+s2,d);
  }
  return 0;
}
