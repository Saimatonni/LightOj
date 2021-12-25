#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,ox,oy,ax,ay,bx,by;
  double o,a,b,k,area;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    cin>>ox>>oy>>ax>>ay>>bx>>by;
    o=sqrt(((bx-ax)*(bx-ax))+((by-ay)*(by-ay)));
    b=sqrt(((ox-bx)*(ox-bx))+((oy-by)*(oy-by)));
    a=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
    k=acos(((a*a)+(b*b)-(o*o))/(2.0*a*b));
    area=a*k;
    printf("Case %d: %lf\n",i,area);
  }
  return 0;
}
