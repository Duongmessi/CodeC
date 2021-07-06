#include<stdio.h>

//là một số nguyên dương mà tổng các ước của nó bằng chính nó. //6,28,496
int main()
{
    int n, i, S=0; //6=1+2+3
    printf("\nNhap vao mot so: ");
    scanf("%d",&n);
    for ( i = 1; i < n; i++ )
    {
        if (n%i==0 )
        {
            S= S+i;
        }
        
    }
    if(S==n)
    {
        printf("\nSo %d la so hoan hao.", n);
    }else printf("\nSp %d khong la so hoan hao.", n);




}