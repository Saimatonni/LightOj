#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<double>v;
  int t;
  cin>>t;
  for(int k=1;k<=t;k++)
  {
    int n,ax[100],ay[100];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      cin>>ax[i]>>ay[i];
    }
    v.clear();
    for(int i=1;i<=n;i++)
    {
      for(int j=i+1;j<=n;j++)
      {
        double d=sqrt(abs((double)(ay[j]-ay[i])*(double)(ay[j]-ay[i])+(double)(ax[j]-ax[i])*(double)(ax[j]-ax[i])));
        v.push_back(d);
      }
    }
    sort(v.begin(),v.end());
    long long ans=1;
    for(int i=0;i<v.size();i++)
    {
      ans++;
      if(v[i]==v[i-1])
      {
        ans--;
      }
    }
    printf("Case %d: %lld\n",k,ans);
  }
  return 0;
}
