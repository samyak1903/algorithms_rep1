//c program for Insertion Sort
#include<stdio.h>
#include<conio.h>
int main()
{
	int *a,x,j,n,i,key,y,z;
	clrscr();
	printf("Enter number of terms in the array: ");
	scanf("%d",&n);

		for(x=0;x<n;x++)
		{
		printf("Enter element %d: ",x+1);
		scanf("%d",&a[x]);
		}
printf("The entered array is as follows: ");
		for(y=0;y<n;y++)
		{
		printf("%d ",a[y]);
		}

for(j=1;j<n;j++)
	{
	key=a[j];
	i=j-1;
	while(i>=0&&a[i]>key)
		{
		a[i+1]=a[i];
		i--;
		}
	a[i+1]=key;
	}
printf("\nThe sorted array is as follows: ");
		for(z=0;z<n;z++)
		{
		printf("%d ",a[z]);
		}
	getch();
	return 0;
}