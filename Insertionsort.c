#include<stdio.h>
void main()
    {
        int size;
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
       
      for(int i=1;i<size;i++)
        {
            int j=i;
            while(arr[j]<arr[j-1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                    j=j-1;
                }
        }
        for(int i=0;i<size;i++)
            {
                printf("%d",arr[i]);
            } 
        
    
}
