#include <stdio.h>
int main()
{
    long long int m,n,a,b, sum, tst, i;
    scanf("%lld", &tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%lld%lld", &n, &m);
        sum = m*(n/2);
        printf("Case %lld: %lld\n", i, sum);
    }
    return 0;
}
