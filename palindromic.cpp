#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  string s,r;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    cin>>s;
    r=s;
    reverse(r.begin(),r.end());
    if(s==r)
    {printf("Case %d: Yes\n",i);}
    else
    {printf("Case %d: No\n",i);}
  }
  return 0;
}
