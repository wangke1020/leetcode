#include <stdio.h>

int strStr(char* haystack, char* needle) 
{
	if (*haystack == 0 && *needle == 0) return 0;
	if (*needle == 0) return 0;
	char*p = haystack;
	char*q = needle;
	int in_match = 0;
	//int start_pos = 0;
	while (*p)
	{
		if (*p == *q)
		{
			++q;
			in_match = 1;
		}
		else if (in_match != 0)
		{
			in_match = 0;
			p = p - (q - needle);
			q = needle;
		}
		++p;
		if (!*q)
		{
			//printf("%d\n", p - haystack);
			//printf("%d\n", q - needle);
			return p - haystack - (q - needle);
		}
		
	}
	return -1;
}

int main()
{
	char* hay = "mississippi";
	char* ne = "issip";
	printf("%d", strStr(hay, ne));
	getchar();
	return 0;
}