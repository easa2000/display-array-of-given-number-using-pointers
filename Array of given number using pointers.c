//program to display an array of given numbers using pointers
#include<stdio.h>
main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int *ptr1, *ptr2;
    ptr1 = arr;
    ptr2 = &arr[9];
    while(ptr1 <= ptr2)
    {
        printf("%d ",*ptr1);
        ptr1++;
    }
}
