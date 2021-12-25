#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,i;
  long long int a,b,c,d,x,y;
  cin>>t;
  for(i=1;i<=t;i++)
  {
    cin>>a>>b>>c>>d;
    x=abs(a-c);
    y=abs(b-d);
    if(x==y) cout<<"Case "<<i<<": 1"<<endl;
    else if((x-y)%2==0) cout<<"Case "<<i<<": 2"<<endl;
    else cout<<"Case "<<i<<": impossible"<<endl;
  }
  return 0;
}
