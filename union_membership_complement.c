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
  struct node *hptr3 = NULL;  struct node *thptr3;
   int h,k,t,tt,d,s,n,p,q,m=0,b;
    struct node *t1=NULL;
    struct node *t2=NULL;
    struct node *t3=NULL;
    struct node *t4=NULL;
    struct node *t5=NULL;
    struct node *t6=NULL; struct node *t7;
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
        for(int k=0;k<p;k++)
        {
        	insert3(thptr1->data);
        	thptr1=thptr1->nptr;
		}
	tthptr2=hptr2;
	
	for(int e=0;e<q;e++)
	{
		tthptr1=hptr1;
		for(int f=0;f<p;f++)
		{
			if(tthptr2->data!=tthptr1->data)
			{
				m=1;
				tthptr1=tthptr1->nptr;
			} 
			 else
			 {
			 	m=0;
			 	break;
			 }
			 	 	    
		}
	      if(m==1)
	           insert3(tthptr2->data);
	      tthptr2=tthptr2->nptr;
	}
       
	   t1=hptr3; t5=hptr3; t6=hptr3;
	   while(t5!=NULL)
	   {
	      t6 = t5;
	     while(t6->nptr!=NULL)
	     {
	        if(t5->data==t6->nptr->data)
	          {
	             t7 = t6->nptr->nptr;
	            t6->nptr=t7;
	           }
	        t6=t6->nptr; 
	     }
	    t5=t5->nptr;
	   }  
	   	while(hptr3!=NULL) 
			{
				printf("%d",hptr3->data);
				hptr3=hptr3->nptr;
                             
			} 
		  
	  hptr3=t1;
	    printf("enter a number that u want to check");
	    int e;
	     scanf("%d",&e);
	     while(t1!=NULL)
	     {
	        if( t1->data==e)
	         {
	            printf("number is present");
                 break;
             }   
           t1=t1->nptr;
         } 
         
        printf("complement of a :");
        t2= hptr3; int z; t3=hptr1;
       while(hptr3!=NULL)
       {
              hptr1=t3;
                  while(hptr1!=NULL)
                      {
                           if(hptr3->data==hptr1->data)
                              {
                                 z=0;
                                 break;
                               } 
                            else
                             z=1 ;  
                      hptr1=hptr1->nptr;   
                     }
                if(z==1)
                  printf("%d\t",hptr3->data);
               hptr3=hptr3->nptr;
         }
         
     //complement of B    
       printf("complement of B:");
       hptr3=t2; t4=hptr2; int c;
             while(hptr3!=NULL)
       {
              hptr2=t4;
                  while(hptr2!=NULL)
                      {
                           if(hptr3->data==hptr2->data)
                              {
                                 c=0;
                                 break;
                               } 
                            else
                             c=1 ;  
                      hptr2=hptr2->nptr;   
                     }
                if(c==1)
                  printf("%d\t",hptr3->data);
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
	 
	
	 
