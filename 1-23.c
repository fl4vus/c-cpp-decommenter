#include <stdio.h>

int main()
{
 	int ch;
	int buffchar0, buffchar1;

	int mode = 1;

	while((ch = getchar()) != EOF)
	{
		if (ch == '/')
		{
			buffchar0 = getchar();
			if (buffchar0 == '/')
			{
				mode = 2;
			}
			else if (buffchar0 = '*')
			{
				mode = 3;		
			}
		
		}
		
		if ((mode == 2) && ch == '\n')
		{
			mode = 1;
		
		}
		
		if ((mode == 3) && (ch == '*'))
		{
			buffchar1 = getchar();
			if (buffchar1 == '/')
			{
				mode = 1;
				continue;
		
			}
		
		}
		
		if (mode == 1)
		{
			putchar(ch);
	
		}
	}

	return 0;
}
