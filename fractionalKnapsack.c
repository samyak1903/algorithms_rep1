//c program for fractional knapsack

#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
int main()
{
clrscr();
struct item
{
char itemname[20];
int qty;
int tprice;
int ppi;
};
int bag;
int n;
printf("Enter bag size: ");
scanf("%d",&bag);
printf("Enter number of items: ");
scanf("%d",&n);
delay(3000);
struct item *ar;
ar=(struct item*)malloc(sizeof(struct item)*(n));
for(int i=0;i<n;i++)
{
printf("Enter Item %d info\n",i+1);
printf("Item name: ");
//fflush(stdin);
scanf("%s",&(ar[i].itemname));
printf("Enter Quantity: ");
scanf("%d",&(ar[i].qty));
printf("Enter Total Price: ");
scanf("%d",&(ar[i].tprice));
ar[i].ppi=(ar[i].tprice)/(ar[i].qty);
}
printf("The entered list is as follows:\n ");
printf("Item\tQuantity\tTotalPrice\tPPI\n");
for(i=0;i<n;i++)
{
printf(" %s\t%d\t\t%d\t\t%d",(ar[i].itemname),(ar[i].qty),(ar[i].tprice),(ar[i].ppi));
printf("\n");
}
int j=0;
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(ar[j].ppi<ar[j+1].ppi)
{
struct item temp;
temp=ar[j];
ar[j]=ar[j+1];
ar[j+1]=temp;
}
}
}
printf("\nThe sorted list is as follows:\n ");
printf("Item\tQuantity\tTotalPrice\tPPI\n");
for(i=0;i<n;i++)
{
printf(" %s\t%d\t\t%d\t\t%d",(ar[i].itemname),(ar[i].qty),(ar[i].tprice),(ar[i].ppi));
printf("\n");
}
int c=bag;
i=0;
int p=0;
while(c>0 && i<n)
{
if(ar[i].qty<=c)
{
c=c-ar[i].qty;
p=p+(ar[i].qty*ar[i].ppi);
ar[i].qty=0;
}
else
{
p=p+(c*ar[i].ppi);
ar[i].qty=ar[i].qty-c;
c=0;
}
i++;
}
printf("\nTotal Profit=%d",p);
getch();
return 0;
}
