/* PROGRAM TO INSERT AN ELEMENT INTO AN ARRAY */

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100], i, size = 0, pos, element;
    printf("ENTER SIZE OF ARRAY: ");
    scanf("%d",&size);
    printf("\nENTER ARRAY ELEMENTS: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("\nARRAY ELEMENTS WITH THEIR INDICES: \n{");
    for(i = 0; i < size; i++)
    {
        printf("  %d  ",a[i]);
    }
    printf("} \n{");
    for(i = 0; i < size; i++)
    {
        printf("  %d  ",i);
    }
    printf("}\nENTER POSITION WHERE YOU WANT TO INSERT ELEMENT: ");
    scanf("%d",&pos);
    if(pos > size - 1 || pos < 0)
    {
        printf("\nINSERTION IS NOT POSSIBLE AS THE POSITION ENTERED DOESN'T EXIST.");
    }
    else
    {
     printf("\nENTER THE ELEMENT YOU WANT TO INSERT: ");
     scanf("%d",&element);
     for(i = size; i >= pos; i--)
     {
         a[i] = a[i - 1];
     }
     a[i] = element;
     size++;
     printf("\nARRAY AFTER INSERTION: ");
     printf("{");
     for(i = 0; i < size; i++)
     {
         printf("  %d  ",a[i]);
     }
     printf("}");
    }
    getch();
}