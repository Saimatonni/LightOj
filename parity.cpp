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
    int sum=0;
    while(n)
     {
       sum+=n%2;
       n=n/2;
     }
     if(sum%2==0)
     {printf("Case %d: enen\n",i);}
     else
     {printf("Case %d: odd\n",i);}
  }
  return 0;
}
