//c program for Heap Sort

#include<stdio.h>
#include<conio.h>
void heapsort(int *,int);
void Buildheap(int *,int);
void maxheap(int,int,int *);

void main()
{
clrscr();
int n;int i;
int *ar;
printf("\nEnter size of array: ");
scanf("\n%d",&n);
printf("Enter array elements:\n");
for(i=1;i<=n;i++)
scanf("\n%d",&ar[i]);
heapsort(ar,n);
printf("Sorted array: ");
for(i=1;i<=n;i++)
printf("%d ",ar[i]);
getch();
}

void heapsort(int *ar,int n)
{
int i,temp;
Buildheap(ar,n);
for(i=n;i>1;i--)
{
int temp=ar[1];
ar[1]=ar[i];
ar[i]=temp;
maxheap(1,i-1,ar);
}
}

void Buildheap(int *ar,int n)
{
int i;
for(i=n/2;i>=1;i--)
maxheap(i,n,ar);
}

void maxheap(int i,int n,int *ar)
{
int j;
j=2*i;
int element=ar[i];
while(j<=n)
{
if(j<n&&ar[j]<ar[j+1])
j=j+1;
if(element>=ar[j])
break;
ar[j/2]=ar[j];
j=2*j;
}
ar[j/2]=element;
}
