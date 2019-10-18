#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void push1 (int x);
void push2 (int k);
struct node
{
   int data;
   struct node*nptr;
 };
  struct node *hptr1 = NULL;  struct node *thptr1;  
  struct node *hptr2 = NULL;  struct node *thptr2;  int s,n,u=0,v=0,p,q;
  struct node *t1;   struct node *t2;
int main()
 {
    int m; char a[100]; char b[100];
       printf("insert first number");
       gets(a);
       printf("enter second number");
       gets(b);
       p=strlen(a);
       q=strlen(b);
       for(int i=0;i<p;i++)
       {
          s=a[i]-48;
          push1(s) ;
       }
     
       for(int j=0;j<q;j++)
           {
              n=b[j]-48;
              push2(n);
           }
       if(u>v)
       printf("number 1 is greater");
      else if(u<v)
          printf("number 2 is greater");
     else
     {
       s:  t1=hptr1; t2=hptr2;
           for(int i=0;i<u-1;i++)
            {
               t1 = t1->nptr;
               t2 = t2->nptr; 
            }  
            if(t1->data>t2->data)
              {
                printf("NUMBER 1 is greater");
                 exit(0);
                }  
              else if( t1->data<t2->data)
              {
                 printf("NUMBER2 is greater");
                 exit(0);
               }
               else
               {
                 u--; v--;
                  goto s;
               } 
                    
      
      }                 
   }
   
   void push1( int x)
   {
     struct node *temp = (struct node*)malloc(sizeof(struct node));
      temp->data=x;
      temp->nptr = hptr1;
      hptr1=temp;
      u=u+1;
     } 
     
  void push2( int k)
   {
     struct node *temp = (struct node*)malloc(sizeof(struct node));
      temp->data=k;
      temp->nptr = hptr2;
      hptr2=temp;
      v=v+1;
     }    
     
     
     
     
     
     
     
     
     
     
      
