#include<iostream>
#include"ListNode.h"
using  namespace std;

ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode *ptrLeft = head;
	ListNode *ptrRight = head;
	ListNode *ptrLeftFront = nullptr;
	unsigned int i = 1;
	while (i != n)
	{
		ptrRight = ptrRight->next;
		i++;
	}
	unsigned int j = 1;
	if (ptrRight->next != nullptr)
		ptrLeftFront = head;
	while (ptrRight->next != nullptr)
	{
		if (ptrLeft != head)
			ptrLeftFront = ptrLeftFront->next;
		ptrLeft = ptrLeft->next;
		ptrRight = ptrRight->next;
	}
	if (ptrLeft == head)
	{
		ListNode *ptrRecord = head;
		head = head->next;
		delete ptrRecord;
	}
	else
	{
		if (ptrLeft->next != nullptr)
		{
			ptrLeftFront->next = ptrLeft->next;
			delete ptrLeft;
		}
		else
		{
			delete ptrLeft;
			ptrLeftFront->next = nullptr;
		}
	}
	return head;
}

int main(void)
{
	ListNode *l = nullptr;
	pushBack(l, 1);
	pushBack(l, 2);
	pushBack(l, 3);
	pushBack(l, 4);
	print(removeNthFromEnd(l, 1));
	return 0;
}