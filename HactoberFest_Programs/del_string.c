#include<stdio.h>
#include<string.h>
void main(){
	char text[200],new_str[200];
	int i=0,j=0,pos=0,num=0;
	printf("\nEnter a string: ");
	gets(text);
	printf("\nEnter the position to delete: ");
	scanf("%d",&pos);
	printf("\nEnter the no. of characters to delete: ");
	scanf("%d",&num);
	while(text[i]!=NULL){
	  if ((num+pos-1) <= strlen(text))
           {
    		strcpy(&text[pos-1],&text[num+pos-1]);
   	   }
	new_str[j++]=text[i++];	
	}
	printf("\nThe new string is: ");
	puts(new_str);
}
