#include<stdio.h>
#include<math.h>

int main()
{
    int i,x,n;
    double S=0;

    printf("\nNhap vao gia tri cua n= "); scanf("%d",&n);
    printf("\nNhap vao gia tri cua x= "); scanf("%d",&x);

    for ( i = 0; i <= n; i++ )
    {
        int giaiThua;
        giaiThua = giaiThua * i;
        if( giaiThua * i == 0 ){
            giaiThua = 1;
        }
        S = S + (pow(-1, i) * pow(x, i)) / ( giaiThua );
    }
    

    printf("S4 = %.3f", S);



}