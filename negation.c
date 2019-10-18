#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
 int data;
  struct node *nptr;
  };
struct node *hptr1 =NULL; struct node *thptr1;
  void insert1( char k);
  char a[100]; int p;
  int main()
  {
    printf("enter the number");
     gets(a);
     p=strlen(a);
      for(int i=0;i<p;i++)
         {
           insert1(a[i]);
         }
         
        if(hptr1->data=='-')
          {
            hptr1=hptr1->nptr;
               for(int i=0;i<p-1;++i)
               {
                printf("%d",(hptr1->data)-48);
                hptr1=hptr1->nptr;
               }
               exit(0);
           }
           
          if(47<hptr1->data<58)
           {
                 printf("-%d",(hptr1->data)-48);
                 hptr1=hptr1->nptr;
                    for(int i=0;i<p-1;i++)
                    {
                      printf("%d",(hptr1->data)-48);
                      hptr1=hptr1->nptr;
                    }
                    
             exit(0);
           } 
           
    }
    
    
    
       void insert1(char k)
      {
          struct node*temp=(struct node*)malloc (sizeof(struct node));
          struct node*thptr1;
             temp->data=k;
            if(hptr1==NULL)
             {
             	temp->nptr=hptr1;
             	hptr1=temp;
             	thptr1=hptr1;
			    }
			else
			  {
				thptr1->nptr=temp;
				temp->nptr=NULL;
				thptr1=temp;

			  }    
      }

