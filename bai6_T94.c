#include<stdio.h>

int main()
{
    int n, k=1, max;
    printf("Nhap vao mot day so cho toi khi so chia het cho 5: ");
    scanf("%d",&n);
    max = n;
    do{
        
        scanf("%d",&n);
        if(max <n){
            max = n;
            k=1;
        }else if(max == n ){
            k++;
        }
       

        
    }while(n%5 != 0);
    printf("\nSo lon nhat la: %d va xuat hien: %d", max, k);



}