#include<stdio.h>
void display(int n,int m,int alloc[n][m],int need[n][m], int max[n][m], int avail[n][m]);

int main()
{
 int n,m,i,j,k;
 int avail[n][m],need[n][m],max[n][m],alloc[n][m];
 int exec[n];
 
 printf("\nEnter the number of proceses: ");
 scanf("%d",&n);
 printf("\nEnter the number of resourses: ");
 scanf("%d",&m);
 
 //avail array
 for(i=0;i<m;i++)
 {
  printf("\nEnter the no. of resourses availabe of type %d",i+1);
  scanf("%d",&max[i][0]);
 }
 
 //max matrix
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("\nEnter the no. of maximum resourses of type %d required for the process %d ",i+1,j+1);
   scanf("%d",&max[i][j]);
  }
 }
 
 //alloc matrix
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("\nEnter the no. of maximum resourses of type %d required for the process %d ",i+1,j+1);
   scanf("%d",&alloc[i][j]);
  }
 }
 
 //need matrix
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   need[i][j]=max[i][j]-alloc[n][m];
  }
 }
 
 //process execution
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   if(need[i][j]>avail[i][j]);
   k++;
  }
  for(j=0;j<m;j++)
  {
   if(k==m)
   {
    avail[i][j]+=alloc[i][j];
    exec[i]=1;
    alloc[i][j]=0;
   }
   else
    exec[i]=0;
  }
  
  printf("\nprocess\tALLOC\tAVAIL\tNEED\tMAX\n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
    printf("\n  %d  \t  %d  \t %d  \t  %d   \t  %d  ",i+1,alloc[i][j],avail[i][j],need[i][j],max[i][j]);
   }
  }

 }
}  

 
 

