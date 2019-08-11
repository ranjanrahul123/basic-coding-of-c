#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*nptr;
};
struct node*hptr=NULL;
void insert(int x,int pos);
void delete(int pos);
void search(int x);
void print();
int main() 
   {
	 int choice;
 p:	 printf("1.insertion\n2.deletion\n3.search\n4.print");
	 scanf("%d",&choice);
	 
	 switch(choice)
	{
		case 1:{
		      int x,pos;
		      printf("enter the number and position respectively");
		      scanf("%d%d",&x,&pos);
		      insert(x,pos);
			 goto p;
		}
		case 2: {
		      int pos;
		      printf("enter the position number from which you want to delete");
		      scanf("%d",&pos);
		      delete(pos);
		     goto p;
		}
		case 3:{
		          int x;
		          printf("enter the number you want to search");
		          scanf("%d",x);
		          search(x);
		         goto p;
		      }
	    case 4:{print()	;	    
		}       
	}
return 0;
}
void insert(int x,int pos)
{
    struct node*temp=(struct node*)malloc(8);
    int i=0;
    struct node*thptr=hptr;
    temp->data=x;
    if(pos==0)
    {
        temp->nptr=hptr;
        hptr=temp;
    }
    else
    {
        while(i<pos-1)
        {
            thptr=thptr->nptr;
            i++;
        }
        temp->nptr=thptr->nptr;
        thptr->nptr=temp;
    }
}    
   void delete(int pos)
   {
       struct node *thptr=hptr;
       if(pos==0)
       {
           hptr=hptr->nptr;
       }
       else
       {
           int i=0;
           while(i<pos-1)
           {
               thptr=thptr->nptr;
               i++;
           }
           thptr->nptr=(thptr->nptr)->nptr;
       }
   }
    
    void search(int x)
    {
        struct node*thptr=hptr;
        int flag=0;
        while(thptr!=NULL)
        {
            if(thptr->data==x)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
             printf("element is present");
        else
        printf("element is absent");
        
    }

 void print()
 {
     struct node*thptr=hptr;
     while(thptr!=NULL)
     {
         printf("%d\t",thptr->data);
         thptr=thptr->nptr;
     }
 }




