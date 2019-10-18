#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insert1 (int k);
void insert2 (int h);
void insert3 (int r);
void borrow(); 
struct node
{
   int data;
   struct node*nptr;
 };
  struct node *hptr1 = NULL;
  struct node *hptr2 = NULL;
  struct node *hptr3 = NULL;
   int h,k,t,tt,d,s,n,p,q,m=0,b;
    struct node *t1=NULL;
    struct node *t2=NULL;
    struct node *t3=NULL;
    struct node *t4=NULL;
    struct node *t5=NULL;
    struct node *t6=NULL;
  struct node *t9=NULL;  struct node *t8=NULL;
  struct node *t7=NULL;
     struct node*thptr3;
 struct node *tthptr3;
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

        // place 0 before the smallest number for equal no of digit

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
    //insert the number in link list

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
       //reversing link list 1
          while(hptr1!=NULL)	
		{
		    t2=hptr1->nptr;
		    hptr1->nptr=t1;
		    t1 = hptr1;
                    t9 = hptr1;
		    hptr1 = t2;
	        } 
         hptr1=t9;
       

      //reversing link list 2

           while(hptr2!=NULL)	
		  {
		    t4=hptr2->nptr;
		    hptr2->nptr=t3;
		    t3 = hptr2;
                   t8=hptr2;
		    hptr2 = t4; 
                  }  
            hptr2=t8;
		tthptr3=hptr3;
         //subtract and store in link list 3
	    borrow();

         // reverse link list3 to get the original number

		while(hptr3!=NULL)	
		    {
		   	  t6=hptr3->nptr;
		   	  hptr3->nptr=t5;
		   	  t5 = hptr3;
            t7 = hptr3;
		   	  hptr3 = t6;
			}
                hptr3=t7;
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

  void borrow()
  {
  	  	for(int l=0;l<t;l++)
  	  	{
  	  		if((hptr1->data)<(hptr2->data))
  	  		{
  	  			hptr1->data=(hptr1->data)+10;
  	  			(hptr1->nptr)->data=((hptr1->nptr)->data)-1;
  	  			 n=(hptr1->data)-(hptr2->data);
  	  			 insert3 (n);
				}
			else
			{
				b=(hptr1->data)-(hptr2->data);
				insert3 (b);
			}
			hptr1= hptr1->nptr;
			hptr2= hptr2->nptr;
			}
  }
