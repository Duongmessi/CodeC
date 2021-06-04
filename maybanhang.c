#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void hienThi(){
    printf("MAY BAN HANG TU DONG\n" 
    "================MENU================"
    "\n1.Tra Xanh C2:        9000/chai" 
    "\n2.Sting:              10.000/chai" 
    "\n3.Warrio:             11.000/chai " 
    "\n4.Nuoc suoi:          5000/chai" 
    "\n5.Pepsi:              12.000/chai" 
    "\n0.Exit");
}

void loading(){
    int i;
    printf("Loading");
    for (i=0; i <= 10; i++){
        sleep(1);
        printf(".");
    }
}


int main(){
    int money, monHang;
    int giaTien[5] = {9000, 10000, 11000, 5000, 12000};

    hienThi(); 

    printf("\n................................");

    printf("\nMoi ban nhap so tien ban co: ");
    scanf("%d", &money);

    printf("\n................................");

    printf("\nMoi ban chon mon hang: ");
    scanf("%d", &monHang);

    printf("\n................................");

    switch (monHang)
    {

        case 0: break;
    
        case 1: {
            int soLuong;
            char key;
            if(money >= giaTien[0]){
                do{
                    printf("\nMoi ban nhap so luong: ");
                    scanf("%d", &soLuong);

                    if(money - soLuong * giaTien[0] >= 0){
                        printf("\n");
                        loading();
                        printf("\n");
                        printf("\nBan da mua thanh cong %d chai.", soLuong);
                        printf("\nBan con thua so tien la: %d VND.", money - soLuong * giaTien[0]); break;
                    } 
                
                    if(money - soLuong * giaTien[0] <= 0){
                        printf("\nBan khong du tien.");
                        printf("\nBan co muon nhap lai(y/n): ");
                        scanf("%s", &key);
                    }
                }while( key != 'n' && key != 'N'); break;
        
            }else printf("\nBan khong du tien.");
    
        }
        case 2: {
            int soLuong;
            char key;
            if(money >= giaTien[1]){
                do{
                    printf("\nMoi ban nhap so luong: ");
                    scanf("%d", &soLuong);

                    if(money - soLuong * giaTien[1] >= 0){
                        loading();
                        printf("\nBan da mua thanh cong %d chai", soLuong);
                        printf("\nBan con thua so tien la: %d VND.", money - soLuong * giaTien[1]); break;
                    } 
                
                    if(money - soLuong * giaTien[1] <= 0){
                        printf("\nBan khong du tien.");
                        printf("\nBan co muon nhap lai(y/n): ");
                        scanf("%s", &key);
                    }
                }while( key != 'n' && key != 'N'); break;
        
            }else printf("\nBan khong du tien.");
        }
        case 3:{
            int soLuong;
            char key;
            if(money >= giaTien[2]){
                do{
                    printf("\nMoi ban nhap so luong: ");
                    scanf("%d", &soLuong);

                    if(money - soLuong * giaTien[2] >= 0){
                        loading();
                        printf("\nBan da mua thanh cong %d chai", soLuong);
                        printf("\nBan con thua so tien la: %d VND.", money - soLuong * giaTien[2]); break;
                    } 
                
                    if(money - soLuong * giaTien[2] <= 0){
                        printf("\nBan khong du tien.");
                        printf("\nBan co muon nhap lai(y/n): ");
                        scanf("%s", &key);
                    }
                }while( key != 'n' && key != 'N'); break;
        
            }else printf("\nBan khong du tien.");
        }
        case 4: {
            int soLuong;
            char key;
            if(money >= giaTien[3]){
                do{
                    printf("\nMoi ban nhap so luong: ");
                    scanf("%d", &soLuong);

                    if(money - soLuong * giaTien[3] >= 0){
                        loading();
                        printf("\nBan da mua thanh cong %d chai", soLuong);
                        printf("\nBan con thua so tien la: %d VND.", money - soLuong * giaTien[3]); break;
                    } 
                
                    if(money - soLuong * giaTien[3] <= 0){
                        printf("\nBan khong du tien.");
                        printf("\nBan co muon nhap lai(y/n): ");
                        scanf("%s", &key);
                    }
                }while( key != 'n' && key != 'N'); break;
        
            }else printf("\nBan khong du tien.");
        }
        case 5:{
            int soLuong;
            char key;
            if(money >= giaTien[4]){
                do{
                    printf("\nMoi ban nhap so luong: ");
                    scanf("%d", &soLuong);

                    if(money - soLuong * giaTien[4] >= 0){
                        loading();
                        printf("\nBan da mua thanh cong %d chai", soLuong);
                        printf("\nBan con thua so tien la: %d VND.", money - soLuong * giaTien[4]); break;
                    } 
                
                    if(money - soLuong * giaTien[4] <= 0){
                        printf("\nBan khong du tien.");
                        printf("\nBan co muon nhap lai(y/n): ");
                        scanf("%s", &key);
                    }
                }while( key != 'n' && key != 'N'); break;
        
            }else printf("\nBan khong du tien.");
        }
        default:
            break;
    }
}



