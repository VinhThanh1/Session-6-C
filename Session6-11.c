#include<stdio.h>
int main(){
	int count = 0; //kiem tra co phai so nguyen to hay khong
	int n; // so luong so nguyen to ma nguoi dung muon hien thi
	int number=0; // bien diem khi du so luong so nguyen to dung chuong trinh
	int prime=2; // khoi tao so nguyen to nho nhat la 2
	printf("Moi ban nhap so luong so nguyen to can in ra: ");
	scanf("%d",&n);
	while(number<n){
		count=0;
		for(int i=1;i<=prime;i++){
			if(prime%i==0){
				count++;
			}
		}
		if(count==2){
			//day la so nguyen to
			printf(" \nso nguyen to %d", prime);
			number++;
		}
		prime++;
	}
	return 0;
}
