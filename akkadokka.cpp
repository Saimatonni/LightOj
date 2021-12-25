#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long w,o,e,t,i;
  cin>>t;
  for(i=1;i<=t;i++)
  {
    cin>>w;
    if(w%2!=0)
    {
      //cout<<"Impossible"<<endl;
      printf("Case %lld: Impossible\n",i);
      //return 0;
      continue;
    }
    else
    {
      o=w/2;
      e=2;
      if(o%2==0)
      {
        o=o/2;
        e=e*2;
      }
        printf("Case %lld: %lld %lld\n",i,o,e);

    }
  }
  return 0;
}
