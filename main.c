#include <stdio.h>
#include <stdlib.h>
#define N 5
int create(int *arr,int ptr)
{
    int num=0;
    ptr=-1;
    char ch;

    do{
    if(num==N)
    {
        printf("Overflow\n");
        return ptr;
    }
    printf("Enter value of element No. %d\n",num);
    ptr=ptr+1;
    scanf("%d",&arr[ptr]);
    printf("Enter new element?\n(Y/N)\n");
    scanf(" %c",&ch);
    num=num+1;
    }while (ch=='Y'||ch=='y');
    return ptr;
}
void display(int *arr,int ptr)
{
    if(ptr==-1)
    {
        printf("Underflow");
        return;
    }
    for(int i=0;i<=ptr;i++)
    {
        printf(" %d | ",arr[i]);
    }
}
int insert(int *arr,int ptr)
{
    int temp;
    if(ptr == N-1)
    {
        printf("Array Overflowed");
        return ptr;
    }
    int pos;
    printf("Enter index of element\n");
    scanf("%d",&pos);
    if(pos>ptr+1||pos>=N)
    {
        printf("Cannot add element at this Position\n");
        return ptr;
    }
    ptr=ptr+1;
    for(int i =ptr;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    printf("Enter value of element\n");
    scanf("%d",&arr[pos]);
    printf("Inserted successfully\n");
    return ptr;
}
int del(int *arr,int ptr)
{
    if (ptr==-1)
    {
        printf("Underflow\n");
        return ptr;
    }
    int pos;
    printf("Enter index number\n");
    scanf("%d",&pos);
    if(pos>ptr)
    {
        printf("Empty position\n");
        return ptr;
    }
    for(int i=pos;i<=ptr;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Element deleted\n");
    ptr=ptr-1;
    return ptr;
}
void update(int *arr,int ptr)
{
    int pos;
    if(ptr==-1)
    {
        printf("Underflow\n");
        return;
    }
    printf("Enter index of element to be updated\n");
    scanf("%d",&pos);
    if(pos>ptr)
    {
        printf("Space Empty\n");
        return;
    }
    printf("Enter updated value\n");
    scanf("%d",&arr[pos]);
    printf("Element updated\n");
    return;
}
void finding(int *arr,int ptr)
{
    if(ptr==-1)
    {
        printf("Underflow\n");
        return;
    }
    int max, min;
    max=min=arr[0];
    for(int i=1;i<=ptr;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("Max is %d\n",max);
    printf("Min is %d\n",min);
}
int main()
{
   int arr[N],op,ptr=-1;
   do{system("cls");
        printf("Enter your Choice: \n");
   printf("\n1. Create New Array\n2. Insert Element\n3. Display Array\n4. Update Element\n5. Delete Element\n6. Find Max and Min\n");
   scanf("%d",&op);
   switch(op)
   {
   case 1:
    ptr=create(arr,ptr);
    getch();
    break;
   case 2:
    ptr=insert(arr,ptr);
    getch();
    break;
   case 3:
       display(arr,ptr);
       getch();
       break;
   case 4:
    update(arr,ptr);
    getch();
    break;
   case 5:
    ptr=del(arr,ptr);
    getch();
    break;
   case 6:
    finding(arr,ptr);
    getch();
    break;
   default:
    {
    printf("\nEnter valid choice\n");
    }
   }
    }while (op!=9);
    return 0;
}
