
#include<stdio.h>
void main()
{
 int i,j,n, a[20],temp;
 printf("Enter the size of the array = ");
 scanf("%d",&n);
 printf("\nEnter the elements of the array to be sorted = ");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("\nThe unsorted elements are = ");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 
 for(i=0;i<n;i++)
 {
 for(j=0;j<n-1-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
}
printf("\nThe elements after sorting are =");
for(i=0;i<n;i++)
printf("%d\n", a[i]);