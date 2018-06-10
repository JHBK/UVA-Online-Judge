#include<bits/stdc++.h>
using namespace std ;

int ar[ 1000001 ] ;
int index_prime [ 1000001 ] ;
int count_prime [ 1000001 ] ;

void sieve( )
{
    int i ;
    for ( i = 2 ; i <= 1000000 ; i++ )
    {
        ar[ i ] = 0 ;
    }

    for ( i = 4 ; i<= 1000000 ; i += 2 )
    {
        ar[ i ] = 1 ;
    }
    int sq = sqrt( 1000000 ) ;

    for ( i = 3 ; i <= sq ; i++ )
    {
        if ( ar[ i ] == 0 )
        {
            for (int j = i * i ; j <= 1000000 ; j += i )
            {
                ar[ j ] = 1 ;
            }
        }
    }
    ar[ 1 ] = 0 ;
}

void store_prime ( )
{
    int i , j = 1, count = 0 ;
    for ( i = 1 ; i <= 1000000 ; i++ )
    {
        if ( ar[ i ] == 0 )
        {
            index_prime[ j ] = i ;
            j++ ;
        }
    }
}

void count_prime_number ()
{
    int i , count = 0 ;
    for ( i = 1 ; i<= 1000000 ; i++ )
    {
        if ( ar[ i ] == 0 )
        {
            count ++ ;
            count_prime [ i ] = count ;
        }
        else
        {
            count_prime[ i ] = count ;
        }
    }
}

int main()
{
    sieve() ;
    store_prime( ) ;
    count_prime_number() ;

    int number, i , c ;
    while ( cin >> number >> c )
    {

        if ( count_prime[ number ] <= 2 * c || count_prime[ number ] <= ( 2 * c - 1 ) )
        {
            printf("%d %d:", number , c ) ;
            for ( i = 1 ; i <= count_prime [ number ] ; i++ )
                printf(" %d" , index_prime[ i ] ) ;
        }
        else if( count_prime [ number ]  % 2 == 0 )
        {
            int start = count_prime[ number ] / 2 - c + 1 ;
            int finish = count_prime [ number ] / 2 + c ;
            printf("%d %d:", number , c ) ;
            for ( i = start ; i <= finish ; i++ )
            {
                printf(" %d" , index_prime[ i ] ) ;
            }
        }
        else
        {
            int addition = ( 2 * c - 2 ) / 2  ;
            int d = ( count_prime [ number ] / 2 + 1 ) ;
            int start = d - addition ;
            int finish = d + addition ;
            printf("%d %d:", number , c ) ;
            for ( i = start ; i <= finish ; i++ )
            {
                printf(" %d" , index_prime[ i ] ) ;
            }
        }
        printf( "\n\n" ) ;
    }
    return 0 ;
}
