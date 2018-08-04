#include<stdio.h>
void display(int [],int);

int main()
{
 int ar[]={5, 4, 3, 2, 5, 4, 6, 5, 4, 3, 2, 6};
 int n=sizeof(ar)/sizeof(ar[0]);
 int nof=4;
 int mem[nof];
 int nom=0,noh=0,i=0,j=0,k=0;
 
 for(;i<nof;i++)
 {
  mem[i]=ar[i];
  nom++;
  display(mem,nof);
 }
 
 for(;i<n;i++)
 {
  for(;j<nof;j++)
  {
   if(ar[i]==mem[j])
   {
    noh++;
/*    printf("Hit ");*/
    break;
   }
   else
   { 
    nom++;
    if(k==nof) k=0;
    mem[k]=ar[i];
    k++; 
    display(mem,nof);
    break;
   }   
  }
  
 }
 printf("Number of misses= %d & hits = %d\n",nom,noh);
}

void display(int ar[],int n)
{
 for(int i=0;i<n;i++)
 printf("%d\n",ar[i]);
 printf("\n");
}
