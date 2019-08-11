

#include <stdio.h>
struct list
{
  int a[100];
  int lsize;
};
void insert(struct list *pl1,int x,int pos);
void delete(struct list *pl1,int pos);
void print();
int main()
{
int number,n=0;
struct list l1 ,*pl1;
pl1=&l1;

printf("enter the number of integer");
scanf("%d",&number);
pl1->lsize=number;
for(int i=0;i<pl1->lsize;i++)
{
scanf("%d",&pl1->a[i]);
}
   int choice;
   printf("1.insert\n2.deletion\n3.search\n4.print");
p: 
  
scanf("%d",&choice);


switch(choice)
{
case 1:
        {
        int x; int pos;
        printf("the number you want to insert and position");
            scanf("%d%d",&x,&pos);
        insert(pl1,x,pos);
            n=n+1;
            goto p;
        }
 case 2: 
         {
         	int pos;
              scanf("%d",&pos);
          delete(pl1,pos);
         	n=n-1;
         	goto p;
         }
 case 3:
         {
        int y,flag=0;
        printf("enter the element to search");
        scanf("%d",&y);
        printf("\n");
        for(int i=0;i<pl1->lsize;i++)
            {
                if(pl1->a[i]==y)
                  flag++;
            }
        if(flag==0)
         printf("element is not present");
         else
         printf("element is present");
         break;
         }
 
 case 4:
  print(pl1,n);
}

return 0;
}
void insert(struct list*pl1,int x,int pos)
{
for(int i=(pl1->lsize)-1;i>=pos;i--)
     {
       pl1->a[i+1]=pl1->a[i];
    }
pl1->a[pos]=x;	

}

  void delete(struct list*pl1,int pos)
  {
  for(int i=pos+1;i<pl1->lsize;i++)
     	pl1->a[i]=pl1->a[i+1];
  }
void print(struct list*pl1,int n)
{
  pl1->lsize=(pl1->lsize)+n;
      for(int i=0;i<pl1->lsize;i++)
      printf("%d",pl1->a[i]);
}

