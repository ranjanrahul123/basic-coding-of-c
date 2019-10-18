#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insert1 (int k); void carry();
void insert2 (int h);
void insert3 (int r);
void multiplication();
struct node
{
   int data;
   struct node*nptr;
 };
  struct node *hptr1 = NULL;  struct node*ptr3=NULL;
  struct node *hptr2 = NULL;
  struct node *hptr3 = NULL;
   int h,k,t,tt,d,s,n,p,q,m=0,b,i,j;
    struct node *t1=NULL;
    struct node *t2=NULL;
    struct node *t3=NULL;
    struct node *t4=NULL;
    struct node *t5=NULL;
    struct node *t6=NULL;
  struct node *t9=NULL;  struct node *t8=NULL;
  struct node *t7=NULL;
     struct node*thptr3;
 struct node *tthptr3;  struct node *thptr2; struct node *thptr1;
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

       //insert the number in link list

       for(int u=0;u<p;u++)
       {
          s=a[u]-48;
          insert1 (s) ;
       }
     
       for(int v=0;v<q;v++)
           {
              n=b[v]-48;
              insert2 (n);
           }
           
         
		
		thptr1=hptr1;
	    multiplication();
          
         // reverse link list3 for addition the carry

	  	while(hptr3!=NULL)	
		    {
		   	  t6=hptr3->nptr;
		   	  hptr3->nptr=t5;
		   	  t5 = hptr3;
              t7 = hptr3;
		   	  hptr3 = t6;
			}
                hptr3=t7;
            //carry moving to right
            thptr3=hptr3;
            
            carry();
            
            // again reverse to get original number
                
          	while(hptr3!=NULL)	
		    {
		   	  t2=hptr3->nptr;
		   	  hptr3->nptr=t1;
		   	  t1 = hptr3;
              t3 = hptr3;
		   	  hptr3 = t2;
			}
                hptr3=t3;
            
        // printing the number
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

 void multiplication()
 {
 	for(j=0;j<q;j++)
 	{
 		for(i=0;i<p;i++)
 		{
 			n=(hptr2->data)*(thptr1->data);
 			if(j==0)
 			{
 				insert3(n);
 				ptr3=hptr3;
 				tthptr3=hptr3;
 			}
			 else
			 {
			 	if(tthptr3==NULL)
			 	  insert3(n);
			 	else
			 	{
			 	  tthptr3->data=(tthptr3->data)+n;
			 	  tthptr3=tthptr3->nptr;
			    }
			 	  
			 }
			thptr1=thptr1->nptr;
		
		 }
	
		hptr2=hptr2->nptr;
			ptr3=ptr3->nptr;
		tthptr3=ptr3;
		thptr1=hptr1;
	 }
 }
 
  void carry()
  {
  	  	m=(thptr3->data)/10;
  	 	thptr3->data=(thptr3->data)%10;
  	 	thptr3=thptr3->nptr;
  	    while(thptr3!=NULL)
  	     {
  	        thptr3->data=m+(thptr3->data);
  	       	m=(thptr3->data)/10;
  	      	thptr3->data=(thptr3->data)%10;
  	 	    thptr3=thptr3->nptr;
	     }
  }

