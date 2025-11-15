
#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter the size of array  ");
    scanf("%d",&size);
    int numbers[size];
     printf("enter the %d elements of array ",size);
        for(i=0;i<size;i++)
        {
           printf("\nElements %d ",i+1);
           scanf("%d",&numbers[i]);
        }
        printf("\n Array elements in the reverse order is :");
        for(i=size-1;i>=0;i--)
        {
            printf("\n%d",numbers[i]);
        }
        printf("\n");
        return 0;
        
        
    
}.c

