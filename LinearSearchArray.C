#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5], n, i, found = 0, elem;
    printf("ENTER SIZE OF ARRAY: ");
    scanf("%d",&n);
    printf("\nENTER ARRAY ELEMENTS: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nENTER ELEMENT YOU WANT TO SEARCH: ");
    scanf("%d",&elem);
    for(i = 0; i < n; i++)
    {
        if(a[i] == elem)
        {
            printf("\nELEMENT FOUND AT INDEX %d",i);
            found++;
        }
    }
    if(found == 0)
    {
        printf("\nELEMENT NOT FOUND.");
    }
    else
    {
        printf("\nSHOWING %d OUT OF %d ELEMENTS.",found,n);
    }
    getch();
}