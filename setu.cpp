#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,x;
  string s;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    int n;
    cin>>n;
    int sum=0;
    printf("Case %d:\n",i);
    for(int i=0;i<n;i++)
    {
      cin>>s;
      if(s=="donate")
      {
        cin>>x;
        sum+=x;
      }
      else
      {
        cout<<sum<<endl;
      }
    }
  }
  return 0;
}
