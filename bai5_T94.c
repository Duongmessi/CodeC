#include<stdio.h>

int main()
{
    int a,S=0, count=0;
    float T;

    printf("\nNhap vao mot day so cho den 0:\n");
    do{
        scanf("%d", &a);
        if (a == 0) break;
        if (a % 2 == 0)
        {
            S=S+a;
            count++;
        }

    }while(a!=0);

    T = (float)S / count;
    printf("\nTrung binh cac so chan la: %.3f", T);
}