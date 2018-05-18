//c program for selection sort

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void swap(int *x,int *y);
void minsort(int a[],int n)
{
 int i,j,min;
 for(i=0;i<n;i++)
 {
  min=n-1;
  for(j=i;j<n;j++)
  {
   if(a[j]<a[min])
   min=j;
  }
 swap(&a[min],&a[i]);
 }
}
void maxsort(int a[],int n)
{
int i,j,max;
 for(i=n-1;i>=0;i--)
 {
  max=0;
  for(j=0;j<=i;j++)
  {
   if(a[j]>a[max])
    max=j;
  }
  swap(&a[max],&a[i]);
 }
}
void display(int a[],int n)
{
for(int i=0;i<n;i++)
{
printf("%3d",a[i]);
}
}
void swap(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}
void main()
{
 clrscr();
 int *a,n,i,j,max,c;
 printf("Enter size of array \n");
 scanf("%d",&n);
 a=(int*)malloc(n*sizeof(int));
 printf("Enter elements in array \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Entered array :- \n");
 display(a,n);
 printf("Enter 1 to sort by minimum and 2 to sort by maximum \n");
 scanf("%d",&c);
 switch(c)
 {
 case 1 : minsort(a,n);
	  break;
 case 2 : maxsort(a,n);
	  break;
 default : printf("Wrong choice entered \n");
 }
 printf("\nSorted array \n");
 display(a,n);
 getch();
}
