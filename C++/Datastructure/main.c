#include <stdio.h>
#include <conio.h>

int main()
{
    int noe ;
    printf("Enter size of array \n");
    scanf("%d", &noe);

    int array[noe] , sum = 0 , i ;

    printf("Enter elements in array \n");

    for (i = 0 ; i < noe ; i++ ){
            scanf("%d", &array[i]);
            sum = sum + array[i];
    }

    printf("Sum of elements in array = %d " , sum );

    return 0 ;
}
