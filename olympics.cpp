#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    double a,b;
    scanf("%lf:%lf",&a,&b);
    double r=sqrt(b*b+a*a)/2.0;
    double theta=acos((r*r+r*r-b*b)/(2.0*r*r));
    double s=r*theta;
    double x=400.0/(2.0*a+2.0*s);
    printf("Case %d: %.10lf %.10lf\n",i,x*a,x*b);

 }
 return 0;
}
