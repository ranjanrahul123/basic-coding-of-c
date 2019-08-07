#include<stdio.h>
#include<conio.h>
void insertionsort(int a[]);
int main()
{
	int a[5];
		printf("enter 5 number which u want to arrange");
	for(int i=0;i<5;i++)
	 scanf("%d",&a[i]);
	 insertionsort(a);
	 for(int p=0;p<5;p++)
        printf("%d",a[p]);	 
}
 void insertionsort(int a[])
 {
 	 int temp;
 	for(int j=0;j<4;j++)
 	for(int s=0;s<j+1;s++)
	 {
	     if(a[s]>a[s+1])
		  {
		  	temp=a[s+1];
		  	a[s+1]=a[s];
		  	a[s]=temp;
		  	
			  }	
	 }
	
 	   
 	}
 	
 
