#include<bits/stdc++.h>
using namespace std;
long long f(long long t,long long n,long long c)
{
  return t*(c-n*t);
}
void solve()
{
  int n,c;
  cin>>n>>c;
  if(n==0)
  {
    cout<<0<<endl;
    return;
  }
  int t1=(c/(2*n)),t2=(c/(2*n))+1;
  if(f(t1,n,c)>=f(t2,n,c))
  {
    cout<<t1<<endl;
  }
  else
  {
    cout<<t2<<endl;
  }
}
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    printf("Case %d: ",i);
    solve();
  }
  return 0;
}
