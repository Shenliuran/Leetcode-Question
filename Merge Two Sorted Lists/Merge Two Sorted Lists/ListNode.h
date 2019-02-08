#pragma once
#ifndef LISTNODE_H
#define LISTNODE_H
struct ListNode
{
	int val;
	struct ListNode *next;
};

struct ListNode *pushBack(struct ListNode *l, int val)
{
	if (l == NULL)
	{
		l = (struct ListNode*)malloc(sizeof(struct ListNode));
		l->val = val;
		l->next = NULL;
	}
	else
	{
		struct ListNode *ptrFlag = l;
		while (ptrFlag->next)
		{
				ptrFlag = ptrFlag->next;
		}
		struct ListNode *newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
		newNode->next = NULL;
		newNode->val = val;
		ptrFlag->next = newNode;
	}
	return l;
}

void print(struct ListNode *l)
{
	struct ListNode *ptrFlag = l;
	while (ptrFlag)
	{
		printf("%d", ptrFlag->val);
		ptrFlag = ptrFlag->next;
	}
	printf("\n");
}
#endif 