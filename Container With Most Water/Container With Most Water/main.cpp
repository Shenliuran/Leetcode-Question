#include<iostream>
using namespace std;
int maxArea(int* height, int heightSize)
{
	int max = 0;
	for (int i = 0; i < heightSize - 1; i++)
	{
		for (int j = i + 1; j < heightSize; j++)
		{
			int minOfTwo = height[i] < height[j] ? height[i] : height[j];
			if (max < minOfTwo * (j - i))
				max = minOfTwo * (j - i);
		}
	}
	return max;
}

int area(int *front, int *end)
{
	int a = (int)(end - front) * ((*front) < (*end) ? (*front) : (*end));
	return a;
}
int maxOfThree(int one, int two, int three)
{
	return (one > two ? one : two) > three ? (one > two ? one : two) : three;
}
int maxArea2(int* height, int heightSize)
{
	int length = heightSize - 1;
	int ptrFront = 0, ptrEnd = heightSize - 1;
	int max = 0;
	while (ptrFront != ptrEnd)
	{
		int whole = area(height + ptrFront, height + ptrEnd);
		int left = area(height + ptrFront, height + ptrEnd - 1);
		int right = area(height + ptrFront + 1, height + ptrEnd);
		if (max < maxOfThree(whole, left, right))
			max = maxOfThree(whole, left, right);
		if (max == whole)
		{
			if (left > right)
				ptrEnd--;
			else
				ptrFront++;
		}
		else if (max == left)
			ptrEnd--;
		else
			ptrFront++;
	}
	return max;
}
int main(void)
{
	int a[9] = { 1,2,3,4,5,25,24,3,4};
	cout << maxArea(a, 9) << endl;
	cout << maxArea2(a, 9) << endl;
	return 0;
}