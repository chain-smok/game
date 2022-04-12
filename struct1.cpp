#include <bits/stdc++.h>
struct stdRec/*type*/{
  char name[20];
  int id;
  int total;
};
int main(){
   stdRec a/*variable*/={"mary",1,100}, b={"john"},*c;//{} is assignment operator
   c=(struct stdRec*)malloc(sizeof(struct stdRec));
   c->id=1;
   (*c).total=100;
   strcpy(c->name,"mary");
   int x=sizeof(struct stdRec);
   printf("c.id=%d,name=%s and total=%d\n",c->id,c->name,c->total);
   printf("a.id=%d,name=%s and total=%d\n",a.id,a.name,a.total);
   printf("b.id=%d,name=%s and total=%d\n",b.id,b.name,b.total);
   a=b;
    printf("a.id=%d,name=%s\n",a.id,a.name);
   /*if(a==b){
       printf("yes\n");
   }
   else printf("no\n");
*/
}