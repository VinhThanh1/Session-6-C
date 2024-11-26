#include<stdio.h>
int main(){
	for (int i = 1; i <= 100; i++) {
    if ((i % 3 == 0) && (i % 5 == 0)) { // neu chia het cho ca 3 và 5
    printf("FizzBuzz \n");     // thi in FizzBuzz
  } else if (i % 3 == 0) { // neu chi chia het cho 3
     printf("Fizz \n");  // thi in Fizz
  } else if (i % 5 == 0) { //neu chi chia het cho 5
     printf("Buzz \n");  // thi in Buzz
  } else { // trong truong hop con lai thi in gia tri cua i
    printf("%d \n",i);
  }
}
	return 0;
}
