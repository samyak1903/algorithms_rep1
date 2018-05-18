//c program for Binary Search
#include<stdio.h>
#include<conio.h>
void sort(int *a,int n)
{
int j,i,key;

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
}

int bsearch(int *a,int e,int l,int u)
{
	int f=0;
		if(l<=u)
		{
			int mid=(l+u)/2;
			if(a[mid]==e)
			{
			f=1;
			}
			if(a[mid]>e)
			{
			return bsearch(a,e,l,mid-1);
			}
			else if(a[mid]<e)
			{
			return bsearch(a,e,mid+1,u);
			}
			else
			{
			return f;
			}

		}
return f;

}

int main()
{
	int *a,n,f=0,e,x,y;
	clrscr();
	printf("Enter number of elements: ");
	scanf("%d",&n);

	fflush(stdin);

	for(x=0;x<n;x++)
	{
	printf("Enter element %d: ",x+1);
	scanf("%d",&a[x]);
	}

	sort(a,n);

	printf("Enter element to be searched: ");
	scanf("%d",&e);

	f=bsearch(a,e,1,n);

	if(f==1)
	printf("found");
	else
	printf("not found");

getch();
return 0;
}