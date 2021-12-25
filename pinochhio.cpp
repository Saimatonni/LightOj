#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++)
    {
      cin>>a[j];
    }
    int cnt=0,b;
    b=a[0]-2;
    cnt=ceil(b/5.0);
    for(int j=1;j<n;j++)
    {
      b=a[j]-a[j-1];
      cnt+=ceil(b/5.0);
    }
    printf("Case %d: %d\n",i,cnt);
  }
  return 0;
}
