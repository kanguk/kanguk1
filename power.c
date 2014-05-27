#include <stdio.h>
#include <math.h>

void main(){
	int result,num,i;
	printf("2의 제곱을 구합니다.\n");
	printf("0이 아닌 수를 입력하시오 : ");
	scanf("%d",&num);
	result = pow(2,num);
	printf("%d\n",result);
}