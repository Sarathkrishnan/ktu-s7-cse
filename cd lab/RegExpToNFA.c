/******************************************************************************

Compiler Design Lab : Course Code - CS 431

Experiment NO	: 2
Program			: Regular Expression to NFA
Semester 		: S7 CSE
College 		: SHM College Of Engineering Kadakkal
Date			: 19/08/2019

Compiler		: Turbo C, Windows

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main(){
	int len,t,i=0,fflash,j=1,x,y;
	char *c;
	char q[20][4];
	clrscr();
	for(x=0;x<20;x++)
	{
		for(y=0;y<4;y++)
		{
			q[x][y]=0;
		}
	}
	printf("\nEnter the reqular expression:");
	scanf("%s",c);
	len=strlen(c);
	while(i<len)
	{
		if((c[i])&&(c[i+1]=='+')&&(c[i+2]))
		{
			q[j][0]=j+1;
			j++;
			q[j][2]=j+1;
			j++;
			q[j][i]=j+1;
		}
		else if ((c[i])&&(c[i+j]=='+')&&(c[i+2]))
		{
			q[j][2]=((j+1)*10)+(j+3);
			j++;
			q[j][0]=j+1;
			j++;
			q[j][2]=j+3;
			j++;
			q[j][1]=j+1;
			j++;
			q[j][2]=t+3;
		}
		else if((c[i])&&(c[i+1]=='*'))
		{
			q[j][2]=((j+1)*10)+(j+3);
			j++;
			q[j][0]=j+1;
			j++;
			q[j][2]=((j-1)*10)+(j+1);

		}
		i++;
	}
	printf("\n Transition function....");
	i=0;
	printf("\n%d is the initial state...",j+1);
	printf("\n %d is the final state..",j+1);
	for(i=0;i<=j;i++)
	{
		if(q[i][0]!=0)
			printf("\n\t q[%d,%c]=%d",i+1,c[0],q[i][0]);
		if(q[i][1]!=0)
			printf("\n\t q[%d,%c]=%d",i,c[2],q[i][1]);
		if((q[i][2]!=0)&&(q[i][2]>10))
			printf("\n\t q[%d,E]=%d,%d",i,q[i][2]/10,q[i][2]%10);
		else if ((q[i][2]!=0)&&(q[i][2])<10)
			printf("\n\t q[%d,E]=%d",i,q[i][2]%10);
	}
	getch();
}
