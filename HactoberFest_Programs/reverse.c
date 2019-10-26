#include<stdio.h>
#include<string.h>

int main(){
	char str[50];
	printf("\nEnter a string: ");
	gets(str);
        // Start from leftmost and rightmost corners of str 
        int l = 0; 
        int h = strlen(str) - 1; 
  
        // Keep comparing characters while they are same 
        while (h > l) 
        { 
           if (str[l++] != str[h--]) 
           { 
              printf("%s is Not Palindrome", str); 
           } 
        } 
        printf("%s is palindrome", str);
}	
