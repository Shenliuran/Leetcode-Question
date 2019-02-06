#pragma once

char *Dictionary(char chNum, int returnSize)
{
	char *lemma;
	switch (chNum)
	{
	case '1':char lemma[] = "*"; returnSize = 1; return lemma;
	case '2':char lemma[] = "abc"; returnSize = 3; return lemma;
	case '3':char lemma[] = "def"; returnSize = 3; return lemma;
	case '4':char lemma[] = "ghi"; returnSize = 3; return lemma;
	case '5':char lemma[] = "jkl"; returnSize = 3; return lemma;
	case '6':char lemma[] = "mno"; returnSize = 3; return lemma;
	case '7':char lemma[] = "pqrs"; returnSize = 4; return lemma;
	case '8':char lemma[] = "tuv"; returnSize = 3; return lemma;
	case '9':char lemma[] = "wxyz"; returnSize = 4; return lemma;
	case '0':char lemma[] = " "; returnSize = 1; return lemma;
	}
}
