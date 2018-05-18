//7. Objective – Write an algorithm and program of Randomized Quick Sort. Find the complexity of algorithm also.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}

void quickSort(int a[],int p,int r)
{
 int q,no;
 if(p<r)
 {
   no=p+rand()%(r-p)+1;
   swap(&a[no],&a[r]);
   q=partition(a,p,r);
   quickSort(a,p,q-1);
   quickSort(a,q+1,r);
 }
}


int partition(int a[],int l,int u)
{
 int pivot,i,j;
 pivot=a[u];
 i=l-1;
 for(j=l;j<u;j++)
 {
  if(a[j]<pivot)
    {
     i=i+1;
     swap(&a[i],&a[j]);
    }
 }

 swap(&a[i+1],&a[u]);
 return i+1;
}

void display(int a[],int n)
{
 int i;
 for(i=0;i<n;i++)
   printf("%d ",a[i]);
}

void main()
{
int i,n,*a;
clrscr();
printf("Enter size of array: ");
scanf("%d",&n);
a=(int*)malloc(n* sizeof(int));
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("\nThe entered array is as follows:\n ");
display(a,n);
quickSort(a,0,n-1);
printf("\nThe sorted array is as follows:\n ");
display(a,n);
getch();
}