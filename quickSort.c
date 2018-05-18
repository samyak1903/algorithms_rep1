//c program for quick sort

#include<stdio.h>
#include<conio.h>

void quickSort(int ar[],int p,int r,char ch)
{
 int q;
 if(p<r)
 { 
if(ch=='f'||ch=='F')
   q=partitionFirst(ar,p,r);
 else if(ch=='l'||ch=='L')
  	 q=partitionLast(ar,p,r);
   quickSort(ar,p,q-1,ch);
  quickSort(ar,q+1,r,ch);
 }
}

void swap(int *x,int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}


int partitionFirst(int ar[],int p,int r)
{
 int pivot,i,j;
 pivot=ar[p];
 i=r+1;
 for(j=r;j>p;j--)
 {
  if(ar[j]>=pivot)
    {
     i=i-1;
     swap(&ar[i],&ar[j]);
    	     }
 }

 swap(&ar[i-1],&ar[p]);
 return i-1;
}

int partitionLast(int ar[],int p,int r)
{
 int pivot,i,j;
 pivot=ar[r];
 i=p-1;
 for(j=p;j<r;j++)
 {
  if(ar[j]<=pivot)
    {
     i=i+1;
     swap(&ar[i],&ar[j]);
    }
 }

 swap(&ar[i+1],&ar[r]);
 return i+1;
}

void display(int ar[],int n)
{
 int i;
 for(i=0;i<n;i++)
   printf("%d ",ar[i]);
}


void main()
{
int *ar,i,n;
char ch;
clrscr();
printf("Enter size of array: ");
scanf("%d",&n);
ar=(int *)malloc(n*sizeof(int));

for(i=0;i<n;i++)
 	scanf("%d",&ar[i]);

printf("\nThe entered array is as follows:\n ");
display(ar,n);

for(;;)
{
printf("\nEnter pivot choice(F/L): ");
fflush(stdin);
scanf("%ch",&ch);
if(ch=='f'||ch=='F'||ch=='l'||ch=='L')
break;
else
printf("WRONG CHOICE! TRY AGAIN\n");
}

quickSort(ar,0,n-1,ch);
printf("\nThe sorted array is as follows:\n ");
display(ar,n);
getch();
}
