#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    do{
        printf("Nhap vao 3 canh cua tam giac ABC voi a=AB ,b=AC ,c=BC ( >0 ) lan luot: " );
        scanf ("%f %f %f", &a, &b, &c);
    } while (a<=0 || b<=0 || c<= 0);
    
    if(a+b>c || a+c>b || c+b>a) {
        printf("\nDay la mot tam giac.");
    }

    if (a*a + b*b == c*c){
         printf("\nTam giac vuong tai A.");
    }
    if (a*a == b*b + c*c){
        printf("\nTam giac vuong tai C.");
    }
    if (a*a + c*c == b*b){
        printf("\nTam giac vuong tai B.");
    }

    if(a==b || a==c || b==c){
        printf("\nDay la tam giac can.");
    }
    
    if (a == b == c)
    {
        printf("\nDay la tam giac deu.");
    }
    
        


}