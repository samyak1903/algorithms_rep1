//c program for job scheduling

#include<stdio.h>
#include<conio.h>
#include<alloc.h>
int main()
{
clrscr();
fflush(stdin);
struct job
{
int jno;
int dl;
int pf;
};

int n;
printf("Enter the total number of jobs: ");
scanf("%d",&n);
struct job *tjobs;
tjobs=(struct job*)malloc(sizeof(struct job)*(n));

for(int i=0;i<n;i++)
{
printf("Enter Job %d info\n",i+1);
printf("Enter DeadLine: ");
scanf("%d",&(tjobs[i].dl));
printf("Enter Profit: ");
scanf("%d",&(tjobs[i].pf));
tjobs[i].jno=i+1;
}

printf("\nThe entered Job list is as follows:\n ");
printf("JobNo\tDeadLine\tProfit\n");
for(i=0;i<n;i++)
{
printf(" %d\t%d\t\t%d",(tjobs[i].jno),(tjobs[i].dl),(tjobs[i].pf));
printf("\n");
}

int j=0;
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(tjobs[j].pf<tjobs[j+1].pf)
{
struct job temp;
temp=tjobs[j];
tjobs[j]=tjobs[j+1];
tjobs[j+1]=temp;
}
}
}

printf("\nThe sorted Job list is as follows:\n ");
printf("JobNo.\tDeadLine\tProfit\n");
for(i=0;i<n;i++)
{
printf(" %d\t%d\t\t%d",(tjobs[i].jno),(tjobs[i].dl),(tjobs[i].pf));
printf("\n");
}

// finding max deadline
i=0;
int m=tjobs[i].dl;
for(i=0;i<n;i++)
{
if(tjobs[i].dl>m)
m=tjobs[i].dl;
}

struct job *seljobs=(struct job*)malloc(sizeof(struct job)*m);
for(i=0;i<m;i++)
{
seljobs[i].dl=i+1;
seljobs[i].jno=0;
seljobs[i].pf=0;
}
int tp=0;
int c=0;
for(i=0;i<n;i++)
{
for(j=tjobs[i].dl-1;j>=0;j--)
{
if(seljobs[j].jno==0)
{
seljobs[j].jno=tjobs[i].jno;
seljobs[j].pf=tjobs[i].pf;
tp+=tjobs[i].pf;
c++;
break;
}
}
if(c==m)
break;
}

printf("\nThe seleted Job list is as follows:\n ");
printf("DeadLine.\tJobNo.\tProfit\n");

for(i=0;i<m;i++)
{
printf(" %d\t\t%d\t%d",(seljobs[i].dl),(seljobs[i].jno),(seljobs[i].pf));
printf("\n");
}

printf("\ntotal profit=%d",tp);
getch();
return 0;
}