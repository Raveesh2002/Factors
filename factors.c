#include<stdio.h>

int main()
{
    int n , i , k=0 , t=0 ;
    printf("Enter any number") ;
    scanf("%d" , &n ) ;
   
   for ( i = 1 ; i <= n ; i++)
   {
       if (n%i==0)
       {
           k++ ;
       }
       else
       {
           t++ ;
        
       }
    
       
   }
   
     printf("%d" , k ) ;

    return 0 ;
}