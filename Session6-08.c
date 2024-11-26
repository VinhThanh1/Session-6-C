#include <stdio.h>
int main() {
    float interestRate,profit,originalDeposit,deposit,month; //lai suat, tien lai, tien gui goc, tien gui, thang
    printf("Tien ban dau: ");
    scanf("%f",&deposit); //tien gui
    originalDeposit=deposit; // tien gui goc = tien gui
    printf("lai suat: "); 
    scanf("%f",&interestRate);
    printf("Thang gui: ");
    scanf("%f",&month);
    for(int i=0;i<month;i++){
        profit=deposit+(interestRate/100*deposit); // tien gui + (lai suat/100* tien gui)
        deposit=profit; // tien gui = tien lai
    }
    printf("Tien lai: %.3f\n",deposit-originalDeposit); // tien gui - tien gui goc
    printf("Tien nhan duoc: %.3f\n",profit); // tien lai
}
