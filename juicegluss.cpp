#include<stdio.h>
#include<math.h>
#define PI acos(-1)

int main()
{
    int i,test;
    int r1,r2,h,p;
     double R,v;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
         scanf (" %d %d %d %d", &r1, &r2, &h, &p);
        R= r2 +(r1-r2)*((double)p/h);
        v = (1/3.0)*PI*( R*R+r2*r2+R*r2)*p;
        printf("Case %d: %lf\n",i,v);
    }
    return 0;
}
