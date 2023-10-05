#include "main.h"

/**
 * factor - function to factorize number
 * @str: address of the number
 * Return: number
 */


int factor(char *str)
{

	u_int32_t num;
	u_int32_t i;

	num = atoi(str);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n",num,num/i,i);
			break;
		}
	}

return (0);
}
