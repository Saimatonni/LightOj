#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,n,c;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>a;
    if(a>10)
    {
      b=a-10;
      c=10;
      cout<<b<<" "<<c<<endl;
    }
    else
    {
      b=0;
      cout<<b<<" "<<a<<endl;
    }
  }
  return 0;
}
