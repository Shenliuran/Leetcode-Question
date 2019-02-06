#pragma once
int area(int *front, int *end)
{
	int a = (int)(end - front) * ((*front) < (*end) ? (*front) : (*end));
	return a;
}
int maxOfThree(int one, int two, int three)
{
	return (one > two ? one : two) > three ? (one > two ? one : two) : three;
}
int min2(int one, int two)
{
	return one < two ? one : two;
}
int max2(int one, int two)
{
	return one > two ? one : two;
}