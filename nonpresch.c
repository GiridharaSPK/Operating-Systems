#include<stdio.h>
int least_pri(int []);

int main()
{
 int i,j,n,p=0,at[n],bt[n],pr[n],rt[n],time,wt,tat;
 
 printf("Enter the no. of processes: ");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  printf("\nEnter the burst time for process %d : ",i+1);
  scanf("%d",&bt[i]);
  rt[i]=bt[i];
  printf("\nEnter the arrival time for process %d : ",i+1);
  scanf("%d",&at[i]);
  printf("\nEnter the priority of process %d : ",i+1);
  scanf("%d",&pr[i]);
 }
 
 time=0;
  //first arrival process is executed
  time=time+bt[0];pr[0]=0;
  printf("\nFirst process executed.\n");
  p=least_pri(pr);
  while(time<100)
  {
   time=bt[p]+time;
   printf("\nprocess %d executed.",p+1);
   pr[p]=0;
   p=least_pri(pr);
  }
  //check available processes
  
  //lowest priority first && frist come first serve
  
 
 return 0;
}

int least_pri(int pr[])
{
 int i,p,least;
 least=pr[0]; p=0;
 if (pr[i]<least) p=i;
 return p;
}




