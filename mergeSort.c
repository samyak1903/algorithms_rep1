//c program for Merge Sort

#include<stdio.h>

#include<conio.h>

void printArray(int*,int);

void mergeSort(int*,int,int);

void merge(int*,int,int,int);

void printArray(int *a,int n)

{

int i;

for(i=0;i<n;i++)

printf("%d ",a[i]);

}



void mergeSort(int *a,int l,int u)

{int mid; if(l<u)

{

mid=((l+u)/2);

mergeSort(a,l,mid);
 
mergeSort(a,mid+1,u);

merge(a,l,mid,u);

}

}

void merge(int *a,int l,int mid,int u)

{int *b; int i=l;

int j=mid+1; int k=0;

int z,y; b=(int*)malloc(sizeof(int)*(u+1)); while(i<=mid && j<=u)

{

if(a[i]<=a[j])

{

b[k]=a[i];

k=k+1;

i=i+1;

}

else

{

b[k]=a[j];

k=k+1;

j=j+1;

}

}
 
while(i<=mid)

{

b[k]=a[i];

k=k+1;

i=i+1;

}

while(j<=u)

{

b[k]=a[j];

k=k+1;

j=j+1;

}

for( z=l,y=0;z<=u;z++,y++)

{

a[z]=b[y];

}

}

int main()

{

int *a,n,i;

clrscr();

printf("Enter number of elements in the array: ");

scanf("%d",&n);

a=(int*)malloc(sizeof(int)*(n));

for(i=0;i<n;i++)

{
 
printf("Enter element %d: ",i+1);

scanf("%d",&a[i]);

}

printf("\nThe entered array is as follows:\n ");

printArray(a,n);

mergeSort(a,0,n-1);

printf("\nThe sorted array is as follows:\n");

printArray(a,n);

getch();

return 0;

}
