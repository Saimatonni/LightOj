#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main()
{ int cs, t ;
  scanf ("%d",&t);

  for ( cs = 1 ; cs <= t ; cs++ )
  {
         double R , n ;

         cin >> R >> n;
         double theata = ( pi ) / n ;
         double  r = R * sin(theata );
         r /= ( 1 + sin( theata ) );

         printf ("Case %d: %lf\n",cs,r);
}
   return 0;
}
