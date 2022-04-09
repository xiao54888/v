#include<stdio.h>
#include<string.h>
main() 
{
	char str3[] = "2+2*3+2/2-1";
	int a = str3[0]-'0',i,b=0;
	for (i = 1; i < strlen(str3); i++)
	{
		switch (str3[i])
		{
		
		case '*': b = b+(str3[i - 1] - '0') * (str3[i + 1] - '0'); break;
		case '/': b = b+(str3[i - 1] - '0') / (str3[i + 1] - '0'); break;
		}
	}
	for (i = 1; i < strlen(str3);i++ )
	{
		switch(str3[i])
		{
		case '+': if (str3[i + 2] == '*' || str3[i + 2] == '/')
		{
			
		}
				else
		{
			a = a + (str3[i + 1] - '0');
			
		}
		case '-': if (str3[i + 2] == '*' || str3[i + 2] == '/')
		{
			
		}
				else
		{
			a = a - (str3[i + 1] - '0');
		
		}
		}
	}
	printf("V3=%d\n",a+b);
}
