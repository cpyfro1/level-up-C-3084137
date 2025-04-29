#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *ordinal(int v)
{
	/*
		 - create this function
		 - this code won't run with out it!
	 */
	// char ch[3];
	v %= 100;
	if (v == 11 || v == 12 || v == 13)
	{
		return "th";
	}
	else
	{
		switch (v %= 10)
		{
		case 1:
			return "st";
			break;
		case 2:
			return "nd";
			break;
		case 3:
			return "rd";
			break;
		default:
			return "th";
			break;
		}
	}
}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for (c = 1; c <= 20; c++)
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
					 c, ordinal(c),
					 c + 20, ordinal(c + 20),
					 c + 40, ordinal(c + 40),
					 c + 60, ordinal(c + 60),
					 c + 80, ordinal(c + 80));
	}

	return (0);
}
