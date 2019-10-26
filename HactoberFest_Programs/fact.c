#include<stdio.h>
int fact(int num){
	if(num==0)
		return 0;
	else if(num==1)
		return 1;
	else
		return num*fact(num-1);
}
int main(){
	int num;
	printf("\nEnter the number: ");
	scanf("%d",&num);
	int res=fact(num);
	printf("\nFactorial of %d is : %d\n",num,res);
	return 0;
}
