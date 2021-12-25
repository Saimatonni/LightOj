#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,m,x;
  string s;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    deque<int>d;
    printf("Case %d:\n",i);
    cin>>n>>m;
    for(int j=1;j<=m;j++)
    {
      cin>>s;
      if(s=="pushLeft")
      {
        cin>>x;
        if(d.size()==n)
        {
          printf("The queue is full\n");
        }
        else
        {
          d.push_front(x);
          printf("Pushed in left: %d\n",x);
        }
      }
      else if(s=="pushRight")
      {
        cin>>x;
        if(d.size()==n)
        {
          printf("The queue is full\n");
        }
        else
        {
          d.push_back(x);
          printf("Pused in right: %d\n",x);
        }

      }
      else if(s=="popLeft")
      {
      if(d.empty())
      {
        printf("The queue is empty\n");
      }
      else
      {
        printf("Popped from left: %d\n",d.front());
        d.pop_front();
      }
    }
    else if(s=="popRight")
    {
      if(d.empty())
      {
        printf("The queue is empty\n");
      }
      else
      {
        printf("Popped from right: %d\n",d.back());
        d.pop_back();
      }
    }
    }
  }
  return 0;
}
