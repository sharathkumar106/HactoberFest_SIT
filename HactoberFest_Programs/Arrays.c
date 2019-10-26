//Provide indentation and necessary documentation

#include<stdio.h>
int main2(){
   int numArr[10]={0,1,2,3,4,5,6,7,8,9};
   int i;
   for(i=0;i<10;i++){
    scanf("%d",&numArr[i]);
   }
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
