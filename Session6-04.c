#include<stdio.h>
int main(){
	float a,b,c,delta;
	printf("Nhap vao 3 so a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	if(a==0){
		// chuyen sang pt bac 1 
		 printf("Phuong trinh co nghiem x = %0.2f",-c/b);
	}else{
		 delta = b*b - 4*a*c;
		 if(delta>0){
		 	printf("Phuong trinh co 2 nghiem phan biet la : %.2f %.2f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
		 } else if(delta==0){
		 	printf("Phuong trinh co nghiem kep la: %f",-b/(2*a));
		 } else{ // delta<0
		 	printf("Phuong trinh vo nghiem");
		 }
	}
	return 0;
}
