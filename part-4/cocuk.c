#include <stdio.h>
float waterPrice(float a);
int main() 
{
int monthlyconsumption[12];
int i;
char month[12][10] = {
"jenuary",
"february",
"march",
"april",
"may",
"june",
"july",
"august",
"september",
"october",
"november",
"december"
};
for (i = 0 ; i < 12 ; i++)
{

printf("Enter water consumption for one month: ");
scanf("%d",&monthlyconsumption[ i ]);

float price[12] ;

}
printf("Month          Consumption       Price\n");
for(int q = 0 ; q<12 ; q++) 
{
	printf("%s %d %f", month + q);
}

	
}

	float waterPrice(float a) {
float result;
if (a > 0 && a <= 15) {
result = a * 4;
}
else if (a > 15) {
result = a * 6;
}
return result;
}