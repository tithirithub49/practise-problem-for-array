//creat subarray with given sum using c languagessssss
#include <stdio.h>
int  subarray ( int arr[], int n, int sum )
{
    int currentsum, i , j , k ;
    for ( i = 0 ; i < n ; i++ )
    {
        currentsum = arr[ i ] ;
        for ( j = i + 1 ; j <= n ; j++ )
        {
            if (currentsum == sum) {
            printf ( " Sum found between indexes %d and %d\n " , i , j -1 ) ;
                printf( " Printing the required subarray: \n " ) ;
                for( k = i ; k <= j - 1 ; k++ )
                {
                    printf( "  %d ",arr[ k ] ) ;
                }
                return 0 ;
            }
            if ( currentsum > sum || j == n )
                break ;
            currentsum = currentsum + arr[ j ] ;
        }
    }
        printf( " \n No subarray found \n " ) ;
}
int main()
{
    int i , A[ 100 ] , n , sum ;
    printf ( " Enter number of elements present in the array : " ) ;
    scanf ( "%d " , &n ) ;
    printf( " Enter array: " ) ;
    for ( i = 0 ;  i < n ; i++ )
    {
        scanf ( "%d " , &A[ i ] ) ;
    }
    printf( " Enter sum value: " ) ;
    scanf( "%d " , &sum ) ;
    subarray ( A , n , sum ) ;
    return 0 ;
}
