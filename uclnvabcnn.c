#include<stdio.h>

int main()
{
    int a, b, ucln, bcnn, P;
    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a <= 0 || b <= 0)
    {
       printf("ERROR");
       return 0;
    }else
    {

    P = a * b;
    do
    {
        if (a == b)
        {
            printf("\n%d", a);
            ucln = a;
            break;
        }
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }    
        
    } while ( 1 );
    
    
    bcnn = P / ucln;
    printf("\n%d", bcnn);
    }

    return 0;
}
