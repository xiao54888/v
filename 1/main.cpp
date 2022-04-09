#include<stdio.h>
#include<string.h>
main() 
{
	char str1[] = "1+2+2+1+2+5+4-1-3+4-8";
	int i, c = str1[0] - '0';
	for (i = 1; i < strlen(str1); i++)
	{
		switch (str1[i])
		{
		case '+': c = c + (str1[i + 1] - '0'); break;
		case '-': c = c - (str1[i + 1] - '0'); break;
		}
	}
	printf("V1=%d\n",c);
}
