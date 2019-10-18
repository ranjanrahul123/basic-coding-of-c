#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insert1 (int k);
void insert2 (int h);
void insert3 (int r);
struct node
{
   int data;
   struct node*nptr;
 };
  struct node *hptr1 = NULL;  struct node *thptr1;  struct node *tthptr1;
  struct node *hptr2 = NULL;  struct node *thptr2;  struct node *tthptr2;
  struct node *hptr3 = NULL;  struct node *thptr3;  struct node *tthptr3;
   int h,k,t,tt,d,s,n,p,q,m=0,b;
    struct node *t1=NULL;
    struct node *t2=NULL;
    struct node *t3=NULL;
    struct node *t4=NULL;
    struct node *t5=NULL;
    struct node *t6=NULL;
  struct node *t9=NULL;  struct node *t8=NULL;
  struct node *t7=NULL;
  int main(void)
 {

      int m; char a[100]; char b[100];
       printf("insert first number");
       gets(a);
       printf("enter second number");
       gets(b);
       p=strlen(a);
       q=strlen(b);
       t=p>q?p:q;
       tt=p>q?q:p;
       for(int i=0;i<p;i++)
       {
          s=a[i]-48;
          insert1 (s) ;
       }
       for(int j=0;j<q;j++)
           {
              n=b[j]-48;
              insert2 (n);
           }
            thptr1=hptr1;
           thptr2=hptr2;
        tthptr3=hptr3;
       for(int d=0;d<q;d++) 
         {
		     thptr1=hptr1;
		     tthptr3=hptr3;
          for(int e=0;e<p;e++)
              {
              	  if(thptr2->data==thptr1->data)
              	  {
              	      	if(hptr3==NULL)
              	      	{
              	      	   insert3(thptr2->data);
              	      	   break;
              	        }
              	        else
              	        {
                            while(tthptr3!=NULL)
							{				  
						         if(tthptr3->data==thptr2->data)
              	  	               {
              	                      m=1;
              	                      break;
              	                   }
              	                   else
              	                    m=0;
              	                 tthptr3=tthptr3->nptr;
              	            }
              	          if(m==0)
              	            insert3(thptr2->data);
              	        
              	         }          
              	 }
				 thptr1=thptr1->nptr;
			  }
			  thptr2=thptr2->nptr;
         }
         
         while(hptr3!=NULL) 
			{
				printf("%d",hptr3->data);
				hptr3=hptr3->nptr;
                             
			} 
  }
  
     void insert1(int k)
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

     
      void insert2(int h)
      {
          struct node*temp=(struct node*)malloc (sizeof(struct node));
          struct node*thptr2;
             temp->data=h;
            if(hptr2==NULL)
             {
             	temp->nptr=hptr2;
             	hptr2=temp;
             	thptr2=hptr2;
			    }
			else
			  {
				thptr2->nptr=temp;
				temp->nptr=NULL;
				thptr2=temp;
			  }    
      }
      
        void insert3( int r)
     {
     	struct node*temp=(struct node*)malloc (sizeof(struct node));
          struct node*thptr3;
             temp->data=r;
            if(hptr3==NULL)
             {
             	temp->nptr=hptr3;
             	hptr3=temp;
             	thptr3=hptr3;
			    }
			else
			  {
				thptr3->nptr=temp;
				temp->nptr=NULL;
				thptr3=temp;
			  }    
	 }
