#pragma once
#include<iostream>
using namespace std;
bool isZero(int one, int two, int three)
{
	if (one + two + three == 0)
		return true;
	else
		return false;
}
void Swap(int* one, int* two)
{
	int temp = *one;
	*one = *two;
	*two = temp;
}
void sort(int *first, int *last)
{
	int *left = first;
	int *right = last - 1;
	int *pivot = last;
	if (first == last)
		return;
	else
	{
		while (left != pivot)
		{
			if (*left > *pivot)
			{
				while (right != left)
				{
					if (*right <= *pivot)
					{
						Swap(left, right);
						break;
					}
					else
						right--;
				}
				if (left == right && *left > *pivot)
				{
					Swap(left, pivot);
					break;
				}			
			}
			else
				left++;
		}
	}
	sort(first, right - 1);
	sort(right + 1, last);
}

void print(int a[], int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i];
	cout << endl;
}

int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}