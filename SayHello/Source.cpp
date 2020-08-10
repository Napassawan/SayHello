#include<stdio.h>
char name[100];
int main()
{
	printf("Oon : What is your name?\n");
	printf("You : My name is ");
	scanf("%s", &name);
	printf("Oon : Hello %s, Nice to meet you.", name);
}