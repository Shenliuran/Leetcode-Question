#pragma once
#ifndef LISTNODE_H
#define LISTNODE_H
#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

void pushBack(ListNode * &l, int val)
{
	if (l == nullptr)
	{
		l = (struct ListNode*)malloc(sizeof(struct ListNode));
		l->val = val;
		l->next = nullptr;
	}
	else
	{
		struct ListNode *ptrFlag = l;
		while (ptrFlag->next)
		{
			ptrFlag = ptrFlag->next;
		}
		struct ListNode *newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
		newNode->next = nullptr;
		newNode->val = val;
		ptrFlag->next = newNode;
	}
}
void print(ListNode *l)
{
	ListNode *ptr = l;
	while (ptr)
	{
		cout << ptr->val << endl;
		ptr = ptr->next;
	}
}
#endif