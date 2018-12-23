#include<iostream>
using namespace std;
typedef struct ListNode
{
	int val;
	struct ListNode *next;
}LinkList;

LinkList * create_linklist()
{
	LinkList * list = (LinkList *) new ListNode;
	list->val = 0;
	list->next = nullptr;
	LinkList *p, *r;
	r = list;
	int number;
	cin >> number;
	int  remainder;
	while (number)
	{
		remainder = number % 10;
		p = (LinkList *) new ListNode;
		p->val = remainder;
		p->next = nullptr;
		r->next = p;
		r = p;
		number /= 10;
	}
	return list;
}

void display(LinkList * list)
{
	LinkList *p;
	p = list->next;
	while (p)
	{
		cout << p->val;
		p = p->next;
	}
	cout << endl;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode *p1, *p2;
	p1 = l1->next;
	p2 = l2->next;
	struct ListNode *l3, *p3, *r;
	int carry = 0;
	l3 = (struct ListNode *) malloc(sizeof(struct ListNode));
	l3->val = 0;
	l3->next = NULL;
	r = l3;
	while (p1 != NULL && p2 != NULL)
	{
		p3 = (struct ListNode *) malloc(sizeof(struct ListNode));
		p3->next = NULL;
		p3->val = (p1->val + p2->val + carry) % 10;
		carry = (p1->val + p2->val + carry) / 10;
		r->next = p3;
		r = p3;

		p1 = p1->next;
		p2 = p2->next;
	}
	if (p1)
		while (p1)
		{
			p3 = (struct ListNode *) malloc(sizeof(struct ListNode));
			p3->next = NULL;
			p3->val = (p1->val + carry) % 10;
			carry = (p1->val + carry) / 10;
			r->next = p3;
			r = p3;
			p1 = p1->next;
		}
	else
		while (p2)
		{
			p3 = (struct ListNode *) malloc(sizeof(struct ListNode));
			p3->next = NULL;
			p3->val = (p2->val + carry) % 10;
			carry = (p2->val + carry) / 10;
			r->next = p3;
			r = p3;
			p2 = p2->next;
		}
	if (carry == 1)
	{
		p3 = (struct ListNode *) malloc(sizeof(struct ListNode));
		p3->next = NULL;
		p3->val = carry;
		r->next = p3;
		r = p3;
	}
	return l3;
}

int main(void)
{
	LinkList *l1, *l2, *l3 = nullptr;
	cout << "typing the number 1:" << endl;
	l1 = create_linklist();
	cout << "typing the number 2:" << endl;
	l2 = create_linklist();
	cout << "the result is:" << endl;
	l3 = addTwoNumbers(l1, l2);
	display(l3);
	return 0;
}