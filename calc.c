#include <stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter two integers: ");

    // Two integers entered by user is stored using scanf() function
    scanf("%d %d", &a, &b);

    // sum of two numbers in stored in variable sumOfTwoNumbers
    c = a + b;

    // Displays sum      
    printf("%d + %d = %d", a,b,c);
	c=a-b;
	printf("%d",c);
	c=a/b;
	printf("%d",c);
	c=a*b;
	printf("%d",c);


    return 0;
}
