
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,x1,x2,y1,y2;
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        printf("Case %d:\n",b);
        scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
        scanf("%d", &c);
        for(d=1; d<=c; d++)
        {
            scanf("%d %d", &e, &f);
            if(((e>=x1) &&(e<=x2)) && ((f>=y1)&&(f<=y2)))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
