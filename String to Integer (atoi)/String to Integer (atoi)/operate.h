#pragma once
bool isNum(char ch)
{
	if (ch >= 48 && ch <= 57)
		return true;
	else
		return false;
}
char *FirstNotNullCh(char *str)
{
	int length = sizeof(str) / sizeof(str[0]) - 1;
	int i = 1;
	if (*str != ' ')
		return str;
	else
	{
		while (*(str + i - 1) == ' ')
		{
			if (*(str + i) != ' ')
				return (str + i);
			i++;
		}
	}
	return nullptr;
}