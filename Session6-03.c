#include <stdio.h>
int main(){
	int answer;
	do{
		printf("Moi ban nhap mat khau : ");
		scanf("%d", &answer);
		if(answer == 1970){
			printf("Mat khau chinh xac ! ");
			
		}else{
			printf("Sai mat khau ! \n");
			printf("\n");
		}
		
	}while(answer != 1970);
	return 0;
}
