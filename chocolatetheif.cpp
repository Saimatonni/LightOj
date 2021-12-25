#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s[150];
  int t,a,b,c;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    int maxo=0,mini=1000000,x,y,n,ar[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>s[i]>>a>>b>>c;
      ar[i]=a*b*c;
      if(ar[i]<mini)
      {
        mini=ar[i];
        x=i;
      }
      if(ar[i]>maxo)
      {
        maxo=ar[i];
        y=i;
      }
    }
    if(mini==maxo)
    {printf("Case %d: no theif\n",i);}
    else
    {
      //printf("Case %d: %s took chocolate from %s\n",i,s[y],s[x]);
      cout<<"Case "<<i<<": "<<s[y]<<" took chocolate from "<<s[x]<<endl;
    }
  }
  return 0;
}
