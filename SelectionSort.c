#include<stdio.h>
void main()
    {
        int size,min_index;
        printf("Enter the size of array:");
        scanf("%d",&size);
        int arr[size];
        printf("Enter the elements: ");
        for(int i=0;i<size;i++)
            {
                scanf("%d",&arr[i]);
            }
        
        for(int i=0;i<size;i++)
            {
                printf("%d",arr[i]);
            }
        printf("\n");
       /* Selection Sorting */
      for(int i=0;i<size;i++)        /* for(int i=0; i<size-1;i++) usually used */
        {
            min_index=i;
            for(int j=i+1;j<size;j++)
                {
                    if(arr[j]<arr[min_index])
                    {
                        min_index=j;
                        
                    }
                }
            int temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
        /* **************** ***************** */
        
        for(int i=0;i<size;i++)
            {
                printf("%d",arr[i]);
            } 
}
