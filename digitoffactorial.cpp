#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,b;
  double logg[1000005];
  logg[0]=0;
  for(int i=1;i<=1000000;i++)
  {
    logg[i]=logg[i-1]+log(i);

  }
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    cin>>n>>b;
    long long sum=logg[n]/log(b)+1;
    printf("Case %d: %lld\n",i,sum);
  }
  return 0;
}
