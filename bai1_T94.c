#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n, count=0, i,j;
    do{
        printf("Nhap vao mot so nguyen duong n= ");
        scanf("%d",&n);
    }while(n<1);
    printf("\nCac so nguyen to nho hon n la: ");
    for ( i = 2; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count ++;
            }
        }
        if(count == 2){
            printf("%3d",i);
        }
        count = 0;
    }
    
}