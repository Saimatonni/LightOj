#include<bits/stdc++.h>
using namespace std;
int bin_dec(int n)
{
  int rem,i=1,binary=0;
  while(n!=0)
  {
    rem=n%2;
    n=n/2;
    binary+=rem*i;
    i*=10;
  }
  return binary;
}
int main()
{
  int a,b,c,d,e,f,g,h;
  int i,j,k,l;
  int m;
  cin>>m;
  for(int s=1;s<=m;s++)
  {
    //cin>>a>>b>>c>>d;
    scanf("%d.%d.%d.%d",&a,&b,&c,&d);
    e=bin_dec(a);
    f=bin_dec(b);
    g=bin_dec(c);
    h=bin_dec(d);
    //cin>>i>>j>>k>>l;
    scanf("%d.%d.%d.%d",&i,&j,&k,&l);
    if(e==i&&f==j&&g==k&&h==l)
    {
      printf("Case %d: Yes\n",s);
    }
    else
    {
      printf("Case %d: No\n",s);
    }
  }
  return 0;
}
