#include <bits/stdc++.h>
struct stdRec{
  int id;
 char name[20];
};
int main(){
   stdRec a={1,"mary"};
   stdRec b={2,"John"};
   printf("a.id=%d,name=%s\n",a.id,a.name);
   printf("b.id=%d,name=%s\n",b.id,b.name);
   a=b;
    printf("a.id=%d,name=%s\n",a.id,a.name);
   /*if(a==b){
       printf("yes\n");
   }
   else printf("no\n");
*/
}