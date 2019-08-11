#include <stdio.h>
struct list
{
  int a[100];
  int lsize;
};
void insert(struct list *pl1,int x,int pos);
void print();
int main()
{
	int number;
	struct list l1 ,*pl1;
	pl1=&l1;
	
	printf("enter the number of integer");
	scanf("%d",&number);
	pl1->lsize=number;
	for(int i=0;i<pl1->lsize;i++)
	{
	 scanf("%d",&pl1->a[i]);
	}
	 printf("the number you want to insert and position");
	 int x; int pos;
	scanf("%d%d",&x,&pos);
	insert(pl1,5,1);
	pl1->lsize=pl1->lsize+1;
	for(int i=0;i<pl1->lsize;i++)
		 printf("%d",pl1->a[i]);
	return 0;
}
void insert(struct list *pl1,int x,int pos)
{
	for(int i=(pl1->lsize)-1;i>=pos;i--)
     {
		pl1->a[i+1]=pl1->a[i];
    	}
	pl1->a[pos]=x;	
	
	}
	


