#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* longestCommonPrefix(char strs[][7], int strsSize) {
	char *prefix = (char*)malloc(sizeof(char)*20);
	unsigned int uCount = 0;
	if (strs == NULL)
		return strs;
	else
	{
		for (unsigned int uIndexY = 0; 1; uIndexY++)
		{
			unsigned int uIndexX = 0;
			int tempSum = 0;
			while (uIndexX < strsSize)
			{
				tempSum += strs[uIndexX++][uIndexY];
			}
			if (tempSum == (int)strs[0][uIndexY] * strsSize && tempSum != 0)
				uCount++;
			else
				break;
		}
		strncpy_s(prefix, strlen(strs[0]), strs[0], uCount);
		return prefix;
	}
}

void init(char **str, int indexXMax, int indexYMax)
{
	str = (char**)malloc(sizeof(char*) * indexXMax);
	for (int i = 0; i < 3; i++)
		str[i] = (char*)malloc(sizeof(char) * indexYMax);
}
int main(void)
{
	char strs[][7] = { "dog","racecar","car" };
	//char **strs = { NULL };
	printf("%s", longestCommonPrefix(strs, 3));

	return 0;
}