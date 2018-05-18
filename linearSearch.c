//c program for linear search
#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	int *a,x,i,j,e,flag=0,t=0;
	clrscr();
	printf("Enter the number of elements in the array: ");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
	printf("Enter element %d: ",i+1);
	scanf("%d",&a[i]);
	}
	while(t==0)
	{
		printf("\nDo you wish to search an element? y/n: ");
		fflush(stdin);
		scanf("%c",&ch);
		if(ch!='y')
		t=1;
		else
		{
		printf("Enter element to be searched: ");
		flag=0;
		scanf("%d",&e);
			for(j=0;j<x;j++)
			{
			if(a[j]==e)
				{
				flag++;
				break;
				}
			}
		if(flag==0)
		printf("Element not found");
		else
		printf("Element found at location %d",j+1);
		}
	}
getch();
return 0;
}