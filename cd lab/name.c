#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
	char exp,c,word[10],pra,d='\0',cons[5];
	char key[20][20]={"if","else","the","while","do","for","char","int","float","print","scanf","void"};
	int i,j,rowl=5,row2=5,row3=5,row5=5;
	int t=0,x=0,pras;
	printf("\n\nEnter the Expression:");
	gets(exp);
	printf("\nOperator identifier symbol keyword constant\n");
	
	
	
