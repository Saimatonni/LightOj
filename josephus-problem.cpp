#include<bits/stdc++.h>
using namespace std;
int jose(int n,int k)
{
  if(n==1)
  {
    return 1;
  }
  else
  {
    return (jose(n-1,k)+k-1)%n+1;
  }
}
int main()
{
  int k,a,b,t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    cin>>a>>b;
    printf("Case %d: %d\n",i,jose(a,b));
  }
  return 0;
}
