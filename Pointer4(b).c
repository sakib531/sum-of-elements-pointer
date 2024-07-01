#include<stdio.h>

void Summation(int *ptrarr , int size)
{
    int k , sum = 0 ;
    for(k = 0 ; k < size ; k++)
    {
        sum +=*(ptrarr + k);
    }
    printf("\nSum of its elements = %d\n" , sum);
}
int main()
{
    int size , k ;

    printf("Enter size of array please\n");
    scanf("%d" , &size);

    int myarr[size] ;
    printf("\nEnter elements of array please\n");
    for(k = 0 ; k < size ; k++)
    {
        scanf("%d" , &myarr[k]);
    }

    printf("\nGiven array\n");
    for(k = 0 ; k < size ; k++)
    {
        printf("%d " , myarr[k]);
    }
    printf("\n");

    Summation(myarr , size);

    return 0 ;
}