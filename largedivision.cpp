#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  string s;
  long long b,k,j;
  for(int i=1;i<=t;i++)
  {
    cin>>s>>b;
    int l=s.size();
    if(s[0]=='-')
    {
      j=1;
    }
    else
    {
      j=0;
    }
    if(b<0)
    {
      b=b*(-1);
    }
    long long n=0;
    for(k=j;k<l;k++)
    {
      n=(s[k]-'0')+n*10;
      n=n%b;
    }
    if(n!=0)
    {printf("Case %d: not divisible\n",i);}
    else
    {printf("Case %d: divisible\n",i);}
  }
  return 0;
}
