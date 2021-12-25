#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a,b;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    int ans=1;
    cin>>a>>b;
    int temp=b;
    while(temp%a!=0)
    {
      temp=temp*10;
      temp+=b;
      temp%=a;
      ans++;
    }
    printf("Case %d: %d\n",i,ans);
  }
  return 0;
}
