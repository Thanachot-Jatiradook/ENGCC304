#include <stdio.h>

int main(){
    int total = 0;
    int payment = 0;
    int change;
    int choice;

    const int Cola = 10 ;
    const int Green_water = 12 ;
    const int Americano_coffe = 30 ;
    const int Latte = 35 ;
    const int Sunflower_seed = 13 ;
    const int Bean_paep = 20 ;
    const int Jin_som_mok = 15 ;

    int count[7] = {0};  

    // แสดงเมนูที่มี
    do{
        printf("\n===== Water Menu =====\n");
        printf("1. โค้ก %d บาท\n", Cola);
        printf("2. น้ำเขียว %d บาท\n", Green_water);
        printf("3. อเมริกาโน่ %d บาท\n", Americano_coffe);
        printf("4. ลาเต้ %d บาท\n", Latte);
        printf("===== Sweetmeat Menu =====\n");
        printf("5. เมล็ดทานตะวัน %d บาท\n", Sunflower_seed);
        printf("6. ถั่วแปบ %d บาท\n", Bean_paep);
        printf("7. จิ้นส้มหมก %d บาท\n", Jin_som_mok);
        printf("0. จบการสั่งซื้อ\n");
        printf("Please Choose your product: ");

        if(scanf("%d", &choice) != 1) {
            printf("กรุณากรอกตัวเลข 0-7 เท่านั้น\n");
            while(getchar() != '\n');
            choice = -1;
            continue;
        }

        // เลือกสินค้า
        switch(choice) {
            case 1: total += Cola; count[0]++; break;
            case 2: total += Green_water; count[1]++; break;
            case 3: total += Americano_coffe; count[2]++; break;
            case 4: total += Latte; count[3]++; break;
            case 5: total += Sunflower_seed; count[4]++; break;
            case 6: total += Bean_paep; count[5]++; break;
            case 7: total += Jin_som_mok; count[6]++; break;
            case 0: break;
        }

        if(choice >=1 && choice <=7){
            printf("\n--- รายการที่เลือกแล้ว ---\n");
            if(count[0]>0) printf("โค้ก x%d = %d บาท\n", count[0], count[0]*Cola);
            if(count[1]>0) printf("น้ำเขียว x%d = %d บาท\n", count[1], count[1]*Green_water);
            if(count[2]>0) printf("อเมริกาโน่ x%d = %d บาท\n", count[2], count[2]*Americano_coffe);
            if(count[3]>0) printf("ลาเต้ x%d = %d บาท\n", count[3], count[3]*Latte);
            if(count[4]>0) printf("เมล็ดทานตะวัน x%d = %d บาท\n", count[4], count[4]*Sunflower_seed);
            if(count[5]>0) printf("ถั่วแปบ x%d = %d บาท\n", count[5], count[5]*Bean_paep);
            if(count[6]>0) printf("จิ้นส้มหมก x%d = %d บาท\n", count[6], count[6]*Jin_som_mok);

            printf("รวมราคาปัจจุบัน: %d บาท\n", total);
        }

    } while(choice!=0);

    // สรุปรายการการซื้อสินค้า
    printf("\n===== สรุปรายการสั่งซื้อ =====\n");
    if(count[0]>0) printf("โค้ก x%d = %d บาท\n", count[0], count[0]*Cola);
    if(count[1]>0) printf("น้ำเขียว x%d = %d บาท\n", count[1], count[1]*Green_water);
    if(count[2]>0) printf("อเมริกาโน่ x%d = %d บาท\n", count[2], count[2]*Americano_coffe);
    if(count[3]>0) printf("ลาเต้ x%d = %d บาท\n", count[3], count[3]*Latte);
    if(count[4]>0) printf("เมล็ดทานตะวัน x%d = %d บาท\n", count[4], count[4]*Sunflower_seed);
    if(count[5]>0) printf("ถั่วแปบ x%d = %d บาท\n", count[5], count[5]*Bean_paep);
    if(count[6]>0) printf("จิ้นส้มหมก x%d = %d บาท\n", count[6], count[6]*Jin_som_mok);

    printf("รวมราคาทั้งหมด: %d บาท\n", total);

    // รับเงิน
    do{
        printf("กรุณาจ่ายเงิน: ");
        if(scanf("%d", &payment) != 1){
            printf("กรุณากรอกตัวเลขเท่านั้น\n");
            while(getchar() != '\n');
            payment = 0;
            continue;
        }
        if (payment < total) {
            printf("เงินไม่พอ กรุณาจ่ายใหม่\n");
        }
    } while(payment < total);

    // คำนวณเงินทอน
    change = payment - total;
    printf("เงินทอนทั้งหมด: %d บาท\n", change);

    int bank1000 = change / 1000; change %= 1000;
    int bank500 = change / 500; change %= 500;
    int bank100 = change / 100; change %= 100;
    int bank50 = change / 50; change %= 50;
    int bank20 = change / 20; change %= 20;
    int coin10 = change / 10; change %= 10;
    int coin5 = change / 5; change %= 5;
    int coin2 = change / 2; change %= 2;
    int coin1 = change;

    printf("\n===== เงินทอน =====\n");
    if(bank1000) printf("แบงค์ 1000 บาท: %d ใบ\n", bank1000);
    if(bank500) printf("แบงค์ 500 บาท: %d ใบ\n", bank500);
    if(bank100) printf("แบงค์ 100 บาท: %d ใบ\n", bank100);
    if(bank50) printf("แบงค์ 50 บาท: %d ใบ\n", bank50);
    if(bank20) printf("แบงค์ 20 บาท: %d ใบ\n", bank20);
    if(coin10) printf("เหรียญ 10 บาท: %d เหรียญ\n", coin10);
    if(coin5) printf("เหรียญ 5 บาท: %d เหรียญ\n", coin5);
    if(coin2) printf("เหรียญ 2 บาท: %d เหรียญ\n", coin2);
    if(coin1) printf("เหรียญ 1 บาท: %d เหรียญ\n", coin1);

    printf("\nขอบคุณที่ใช้บริการ\n");

    return 0;
}
