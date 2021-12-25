#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,ax,ay,bx,by,cx,cy,dx,dy,area,i,q;
  cin>>a;
  for(i=1;i<=a;i++)
  {
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    dx=(ax+cx-bx);
    dy=(ay+cy-by);
    q=abs((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
    area=0.5*q;
    printf("Case %d: %d %d %d\n",i,dx,dy,area);
  }
  return 0;
}
