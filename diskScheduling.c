#include<stdio.h>
void fcfs(int ar[],int head, int n);
void sstf(int ar[],int head, int n);
int minDiff(int p, int ar[],int n);
int mod(int n);

int main()
{
 int i,j,n=8,head=53;
 int ar[8]={95, 180, 34, 119, 11, 123, 62, 64};
 
 fcfs(ar,head,n);
 sstf(ar,head,n);
}

void fcfs(int ar[],int head,int n)
{
 int i;
 int fcfs[n+1];
 fcfs[0]=head;
 
 for(i=1;i<n+1;i++)
 fcfs[i]=ar[i-1];
 
 printf(" \n In FCFS, the reader moves as: \n ");
 for(i=0;i<n+1;i++)
 printf("%d  ",fcfs[i]);
}

void sstf(int ar[],int head,int n)
{
 int i;
 int sstf[n+1];
 sstf[0]=head;
 
 for(i=1;i<n+1;i++)
 {
  sstf[i]= ar[minDiff(sstf[i-1],ar,n)];
  
 }
 
 printf(" \n In SSTF, the reader moves as: \n ");
 for(i=0;i<n+1;i++)
 printf("%d  ",sstf[i]);
}

int minDiff(int num,int ar[],int n)
{
 int i,p;
 int s=1000;
 for(i=0;i<n;i++)
 {
  if (s>mod(num-ar[i]) && ar[i]!=num) p=i;
 }
 return p;
}

int mod(int n)
{
 return (n>0)?n:(-1*n);
}
