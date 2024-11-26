#include<stdio.h>
int main(){
	int num;
	printf("Nhap vao mot so nguyen bat ky: ");
	scanf("%d",&num);
	printf("Cac uoc so cua %d la: \n",num);
	for(int i=1;i<=num;i++){
		if (num % i == 0){
			printf("%d \n",i);
		}
	} 
	return 0;
}
