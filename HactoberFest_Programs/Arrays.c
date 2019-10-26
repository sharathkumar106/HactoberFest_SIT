//Provide indentation and necessary documentation
//Provide indentation and necessary documentation

#include<stdio.h>
int main(){
   int i,numArr[10]={0};
   for(i=0;i<sizeof(numArr)/sizeof(numArr[0]);i++)
    scanf("%d",&numArr[i]);
   for(i=0;i<9;i+=3){
    for(int j=i;j<=2+i;j++){
       printf("%d",numArr[j]);
        if((j+1)%3!=0)
            printf(",");
    }
    printf("\n");
   }
   printf("%d",numArr[9]);

   return 0;
}

