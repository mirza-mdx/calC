#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	printf("choose one operation(+ - * /):\n");
	scanf("%c",&op);
	op=getchar();
	switch(op) 
	{
		case '+':printf("%d+%d=%d",a,b,a+b);
		break;
		case '-':printf("%d-%d=%d",a,b,a-b);
		break;
		case '*':printf("%d*%d=%d",a,b,a*b);
		break;
		case'/':printf("%d/%d=%d",a,b,a/b);
		break;
     }
		return 0;
	
	}
