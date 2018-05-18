//c program for bubble sort
#include<stdio.h>
#include<conio.h>
int main()
{
	int *a,n,i,j,temp;
	clrscr();
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	
for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&(a[i]));
	}
	printf("The array is as follows: \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);

	for(i=0;i<n;i++)
	{
	for(j=0;j<n-1;j++)
	{
	if(a[j]>a[j+1])
	 {
	 temp=a[j];
	 a[j]=a[j+1];
	 a[j+1]=temp;
	 }
	}
	}
printf("\nThe sorted array is as follows:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
return 0;
}
