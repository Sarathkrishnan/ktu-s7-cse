#include<stdio.h>
#include<math.h>
int main(){
	float r,ar;
	printf("Enter the radius:");
	scanf("%f",&r);
	ar=(M_PI*(pow(r,2.0)));
	printf("Area of circle+%f",ar);
	return 0;
}
