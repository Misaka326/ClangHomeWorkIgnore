// #include <stdio.h>
//
// void main () {
//     char c1,c2;
//     //c1='a';
//     //c1=a;   err
//     //c1 = "a"; err
//     //c2 = "b"; err
//     //c1=280; c2=350; //^
//     //c2='b';
//     printf("%c%c\n",c1,c2);
//     //printf("%d%d\n",c1,c2);       9798
// }

// #include <stdio.h>
// void main( )
// {
//     char c1='a' ; char c2='b' ; char c3='c' ;
//     char c4='\101' ; char c5='\116' ;
//     printf("a=%cb%c\tc%c\tabc\n",c1,c2,c3);
//     printf("\t\b%c %c",c4,c5);
// }

// #include <stdio.h>
// void main( ) {
//     int a,b;
//     unsigned c,d;
//     long e,f;
//     a=100;
//     b=-100;
//     e=50000;
//     f=32767;
//     c=a;
//     d=b;
//     printf("%d,%d \n" ,a,b);
//     printf("%u,%u \n",a,b);
//     printf("%u,%u \n",c,b);
//     c=a=e;
//     d=b=f;
//     printf("%d,%d \n",a,b);
//     printf("%u,%u \n",c,d);
// }
#include <stdio.h>
void main( )
{
    // int i,j,m,n ;
    // i=8 ;
    // j=10 ;
    // m=i++ ;
    // n=++j;
    // printf("%d,%d,%d,%d",i,j,m,n);
    // int i, j; i=8; j=10;
    // printf("%d,%d", i++, j++);
    int i,j,m=0,n=0 ;
    j=10 ;
    i=8 ;
    m+=i++;
    n-= --j;
    printf("i=%d, j=%d, m=%d, n=%d",i,j,m,n);
}