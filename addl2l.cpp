#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
   int data;
   struct node*nptr;
 }
  struct node *hptr1 = NULL;
  struct node *hptr2 = NULL;
  struct node *hptr3 = NULL;
   int h,k,t,tt,m=0;
   struct node *t1,*t2,*t3,*t4,*t5,*t6;
     t1=t2=t3=t4=t5=t6=NULL;
     struct node*thptr3;
 int main()
 {

      int m; char a[100]; char b[100];
       printf("insert first number");
       gets(a);
       gets(b);
       p=strlen(a);
       q=strlen(b);
       t=p>q?p:q;
       tt=p>q?q:p;
       if(p>q)
		   {
		   	 for(int i=0;i<(t-tt);i++)
		   	  insert2(0);
		   }
		else if(p<q)
			{
			  for(int i=0;i<(t-tt);i++)
			  insert1 (0);
		    }
       for(int i=0;i<p;i++)
       {
          m=a[i]-48;
          insert1 (m) ;
       }
     
       for(int j=0;j<q;j++)
        {
        	n=a[j]-48;
        	insert2 (n);
		}
		   while(hptr1!=NULL)	
		    {
		   	  t2=hptr1->nptr;
		   	  hptr1->nptr=t1;
		   	  t1 = hptr1;
		   	  hptr1 = t2;
			} 
		 while(hptr2!=NULL)	
		    {
		   	  t4=hptr2->nptr;
		   	  hptr2->nptr=t3;
		   	  t3 = hptr2;
		   	  hptr2 = t4;
			  }     
	    for(int i=0;i<t;i++)
	    {
	    	d=(hptr1->data)+(hptr2->data);
	    	  insert3 (d);
	    	hptr1 = hptr1->nptr;
	    	hptr2 = hptr2->nptr;
		}
		thptr3=hptr3;
		carry();
		while(hptr3!=NULL)	
		    {
		   	  t6=hptr3->nptr;
		   	  hptr3->nptr=t5;
		   	  t5 = hptr3;
		   	  hptr3 = t6;
			}
			while(hptr3!=NULL) 
			{
				printf("%d",hptr3->data);
				hptr3=hptr3->nptr;
			}
	         
 }

      int insert1(int k)
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
				thptr1=thptr1->nptr;
			  }    
      }

       
      int insert2(int h)
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
				thptr2=thptr2->nptr;
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
				thptr3=thptr3->nptr;
			  }    
	 }

  void carry()
  {
  	  	m=(thptr3->data)/10;
  	 	thptr3->data=(thptr3->data)%10;
  	 	thptr3=thptr3->nptr;
  	    while(thptr3!=NULL)
  	     {
  	        thptr->data=m+(thptr->data);
  	       	m=(thptr3->data)/10;
  	      	thptr3->data=(thptr3->data)%10;
  	 	    thptr3=thptr3->nptr;
	     }
  }

