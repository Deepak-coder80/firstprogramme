#include <stdio.h>

void main(){
    int size,i,array[50],num,pos,choice;

    //get size
    printf("Enter the size of array:");
    scanf("%d",&size);

    //get array
    printf("Enter the elements of array:");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }

    //print array:
    printf("The array elements are:");
    for ( i = 0; i < size; i++)
    {
        printf("[%d]\n",array[i]);
    }

    //want to insert?
    printf("You wanted to insert any number further? \n \t Enter 1 for Yes \t Enter 2 for No: ");
    scanf("%d",&choice);

    if (choice == 1)
    {
       //get number
       printf("Enter the Number wanted to insert:");
       scanf("%d",&num);

       //get position
       printf("Enter Position in which the number want to insert:");
       scanf("%d",&pos);

       //swap the other elements
       for ( i = size-1; i >=pos-1; i--)
       {
          array[i+1] = array[i];
       }

       array[pos-1] = num;

       //size change
       size++;
       
        //print array:
        printf("The array elements are:");
        for ( i = 0; i < size; i++)
        {
            printf("[%d]\n",array[i]);
        }

    }
    else
    {
        printf("No Insertion!!!\n");
    }
    
    
}