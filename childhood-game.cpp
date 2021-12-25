#include <stdio.h>
   int main()
       {
       int T,i,n;
       char name[5];
       scanf("%d",&T);

       for(i =0; i<T; i++) {
               scanf("%d%s",&n,name);
               if(name[0]=='A') {
                       if(n%3==1)
                           printf("Case %d: Bob\n",i+1);
                       else
                           printf("Case %d: Alice\n",i+1);
                       }
               else if(name[0]=='B') {
                       if(n%3==0)
                           printf("Case %d: Alice\n",i+1);
                       else
                           printf("Case %d: Bob\n",i+1);



                       }

               }

       return 0;
       }
