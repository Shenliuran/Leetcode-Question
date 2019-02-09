#include<stdio.h>
#include "ListNode.h"

/*�ݹ鷨*/
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
//	if (l1 == NULL && l2 == NULL)
//		return NULL;
//	else if (l1 == NULL && l2 != NULL)
//		return l2;
//	else if (l1 != NULL && l2 == NULL)
//		return l1;
//	else
//	{
//		if (l1->val <= l2->val)
//		{
//			l1->next = mergeTwoLists(l1->next, l2);
//			return l1;
//		}
//		else
//		{
//			l2->next = mergeTwoLists(l2->next, l1);
//			return l2;
//		}
//	}
//}

/*�ǵݹ鷨*/
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
	if (l1 == NULL && l2 == NULL)
		return NULL;
	else if (l1 == NULL && l2 != NULL)
		return l2;
	else if (l1 != NULL && l2 == NULL)
		return l1;
	else
	{
		struct ListNode *ptrNow1 = l1, *ptrNowNext1 = l1->next;
		struct ListNode *ptrOp2 = l2, *ptrOpNext2 = l2->next;
		while (ptrOp2 != NULL &&ptrNow1 != NULL)
		{
			if (ptrOp2->val >= ptrNow1->val && ptrOp2->val <= ptrNowNext1->val)
			{
				ptrOp2->next = ptrNow1->next;
				ptrNow1->next = ptrOp2;

				ptrOp2 = ptrOpNext2;
				ptrOpNext2 = ptrOpNext2->next;
				ptrNow1 = ptrNowNext1;
				ptrNowNext1 = ptrNowNext1->next;
			}
			/*else if (ptrOp2->val == ptrNowNext1->val)
			{
				ptrOp2->next = ptrNow1->next;
				ptrNow1->next = ptrOp2;

				ptrOp2 = ptrOpNext2;
				ptrOpNext2 = ptrOpNext2->next;
				ptrNow1 = ptrNowNext1;
				ptrNowNext1 = ptrNowNext1->next;
			}*/
			else if (ptrOp2->val < ptrNow1->val)
			{
				ptrOp2->next = ptrNow1;

				ptrOp2 = ptrOpNext2;
				ptrOpNext2 = ptrOpNext2->next;
				ptrNow1 = ptrNowNext1;
				ptrNowNext1 = ptrNowNext1->next;
			}
			else if (ptrOp2->val > ptrNowNext1->val)
			{
				ptrNow1 = ptrNow1->next;
				ptrNowNext1 = ptrNowNext1->next;
			}
		};
	}
}

int main(void)
{
	struct ListNode *l1 = NULL, *l2 = NULL;
	l1 = pushBack(l1, 1);
	l1 = pushBack(l1, 2);
	l1 = pushBack(l1, 3);
	l2 = pushBack(l2, 2);
	l2 = pushBack(l2, 3);
	l2 = pushBack(l2, 4);
	print(l1);
	print(l2);
	print(mergeTwoLists(l1, l2));
	return 0;
}