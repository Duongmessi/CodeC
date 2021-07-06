#include<stdio.h>

int main()
{   
    float a, b, x, y;
    printf("Nhap vao hai so a,b: ");
    scanf("%f %f",&a ,&b);

    if (a>b)
    {
        x = (a+b)/3;
    }
    if (a = b)
    {
        x = 1.5172;
    }
    if (a<b)
    {
        x = (a-b)/(a*a + b*b);
    }
    
    y = 15*x*x + x + 7.2;

    printf("\nVoi x= %.5f thi y= %.5f",x ,y);
    



}