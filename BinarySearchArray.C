#include<stdio.h>
#include<conio.h>
void main() 
{
    int i, j, n, data, a[100];
    int found = 0;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);
    printf("\nENTER ARRAY ELEMENTS: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("\nENTER THE ELEMENT YOU WANT TO FIND: ");
    scanf("%d", &data);
    int low = 0, high = n-1, mid;
    while (low <= high) 
    {
        mid = (low + high) / 2;
        if (a[mid] == data) 
        {
            printf("\nELEMENT FOUND AT INDEX %d", mid);
            found = 1;
            break;
        } 
        else if (a[mid] < data) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }
    if (found=0) 
    {
        printf("\nELEMENT NOT FOUND.");
    }
    getch();
}