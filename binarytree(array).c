#include <stdio.h>
void buildtree(int arr[],int pos,int value)
    {
        arr[pos]=value;
        printf("Does this node with element %d has a left child ?(1/0) :",value);
        int option1;
        scanf("%d",&option1);
        if(option1==1)
            {  int data;
               printf("Enter the value of left node: ");
               scanf("%d",&data);
               buildtree(arr,2*pos,data);  
            }
        printf("Does this node with element %d has a right child ?(1/0):",value);
        int option2;
        scanf("%d",&option2);
        if(option2==1)
            {  int data;
               printf("Enter the value of right node: ");
               scanf("%d",&data);
               buildtree(arr,(2*pos)+1,data);  
            }
    }


int main() {
   int first;
   int arr[100];
   printf("Enter the value of root node: ");
   scanf("%d",&first);
   buildtree(arr,1,first);
   for(int i=1;i<20;i++)
    {   if (arr[i]==0)
        {
            printf(" _ ");
        }
        else{
        printf(" %d ",arr[i]);
        }
    }
}
